// Copyright (c) 2018 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <init.h>
#include <qt/monedadelmundo.h>
#include <qt/test/optiontests.h>
#include <test/util/setup_common.h>
#include <util/system.h>

#include <QSettings>
#include <QTest>

#include <univalue.h>

//! Entry point for MonedaDelMundoApplication tests.
void OptionTests::optionTests()
{
    // Test regression https://github.com/monedadelmundo/monedadelmundo/issues/24457. Ensure
    // that setting integer prune value doesn't cause an exception to be thrown
    // in the OptionsModel constructor
    gArgs.LockSettings([&](util::Settings& settings) {
        settings.forced_settings.erase("prune");
        settings.rw_settings["prune"] = 3814;
    });
    gArgs.WriteSettingsFile();
    OptionsModel{};
    gArgs.LockSettings([&](util::Settings& settings) {
        settings.rw_settings.erase("prune");
    });
    gArgs.WriteSettingsFile();
}

void OptionTests::parametersInteraction()
{
    // Test that the bug https://github.com/monedadelmundo-core/gui/issues/567 does not resurface.
    // It was fixed via https://github.com/monedadelmundo-core/gui/pull/568.
    // With fListen=false in ~/.config/MonedaDelMundo/MonedaDelMundo-Qt.conf and all else left as default,
    // monedadelmundo-qt should set both -listen and -listenonion to false and start successfully.
    gArgs.ClearPathCache();

    gArgs.LockSettings([&](util::Settings& s) {
        s.forced_settings.erase("listen");
        s.forced_settings.erase("listenonion");
    });
    QVERIFY(!gArgs.IsArgSet("-listen"));
    QVERIFY(!gArgs.IsArgSet("-listenonion"));

    QSettings settings;
    settings.setValue("fListen", false);

    OptionsModel{};

    const bool expected{false};

    QVERIFY(gArgs.IsArgSet("-listen"));
    QCOMPARE(gArgs.GetBoolArg("-listen", !expected), expected);

    QVERIFY(gArgs.IsArgSet("-listenonion"));
    QCOMPARE(gArgs.GetBoolArg("-listenonion", !expected), expected);

    QVERIFY(AppInitParameterInteraction(gArgs));

    // cleanup
    settings.remove("fListen");
    QVERIFY(!settings.contains("fListen"));
    gArgs.ClearPathCache();
}
