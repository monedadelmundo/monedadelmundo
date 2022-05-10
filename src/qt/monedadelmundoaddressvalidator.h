// Copyright (c) 2011-2020 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef MONEDADELMUNDO_QT_MONEDADELMUNDOADDRESSVALIDATOR_H
#define MONEDADELMUNDO_QT_MONEDADELMUNDOADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class MonedaDelMundoAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit MonedaDelMundoAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

/** MonedaDelMundo address widget validator, checks for a valid monedadelmundo address.
 */
class MonedaDelMundoAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit MonedaDelMundoAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

#endif // MONEDADELMUNDO_QT_MONEDADELMUNDOADDRESSVALIDATOR_H
