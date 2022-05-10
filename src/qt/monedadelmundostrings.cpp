

#include <QtGlobal>

// Automatically generated by extract_strings_qt.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *monedadelmundo_strings[] = {
QT_TRANSLATE_NOOP("monedadelmundo-core", "The %s developers"),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"%s corrupt. Try using the wallet tool monedadelmundo-wallet to salvage or restoring "
"a backup."),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"-maxtxfee is set very high! Fees this large could be paid on a single "
"transaction."),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"Cannot downgrade wallet from version %i to version %i. Wallet version "
"unchanged."),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"Cannot obtain a lock on data directory %s. %s is probably already running."),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"Cannot provide specific connections and have addrman find outgoing "
"connections at the same time."),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"Cannot upgrade a non HD split wallet from version %i to version %i without "
"upgrading to support pre-split keypool. Please use version %i or no version "
"specified."),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"Distributed under the MIT software license, see the accompanying file %s or "
"%s"),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"Error loading %s: External signer wallet being loaded without external "
"signer support compiled"),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"Error reading %s! All keys read correctly, but transaction data or address "
"book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"Error reading %s! Transaction data may be missing or incorrect. Rescanning "
"wallet."),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"Error: Dumpfile format record is incorrect. Got \"%s\", expected \"format\"."),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"Error: Dumpfile identifier record is incorrect. Got \"%s\", expected \"%s\"."),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"Error: Dumpfile version is not supported. This version of monedadelmundo-wallet "
"only supports version 1 dumpfiles. Got dumpfile with version %s"),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"Error: Legacy wallets only support the \"legacy\", \"p2sh-segwit\", and "
"\"bech32\" address types"),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"Error: Listening for incoming connections failed (listen returned error %s)"),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"Fee estimation failed. Fallbackfee is disabled. Wait a few blocks or enable -"
"fallbackfee."),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"File %s already exists. If you are sure this is what you want, move it out "
"of the way first."),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"Invalid amount for -maxtxfee=<amount>: '%s' (must be at least the minrelay "
"fee of %s to prevent stuck transactions)"),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"Invalid or corrupt peers.dat (%s). If you believe this is a bug, please "
"report it to %s. As a workaround, you can move the file (%s) out of the way "
"(rename, move, or delete) to have a new one created on the next start."),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"More than one onion bind address is provided. Using %s for the automatically "
"created Tor onion service."),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"No dump file provided. To use createfromdump, -dumpfile=<filename> must be "
"provided."),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"No dump file provided. To use dump, -dumpfile=<filename> must be provided."),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"No wallet file format provided. To use createfromdump, -format=<format> must "
"be provided."),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"Please check that your computer's date and time are correct! If your clock "
"is wrong, %s will not work properly."),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"Please contribute if you find %s useful. Visit %s for further information "
"about the software."),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"Prune configured below the minimum of %d MiB.  Please use a higher number."),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"Prune: last wallet synchronisation goes beyond pruned data. You need to -"
"reindex (download the whole blockchain again in case of pruned node)"),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"SQLiteDatabase: Unknown sqlite wallet schema version %d. Only version %d is "
"supported"),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"The -txindex upgrade started by a previous version cannot be completed. "
"Restart with the previous version or run a full -reindex."),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"The block database contains a block which appears to be from the future. "
"This may be due to your computer's date and time being set incorrectly. Only "
"rebuild the block database if you are sure that your computer's date and "
"time are correct"),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"The block index db contains a legacy 'txindex'. To clear the occupied disk "
"space, run a full -reindex, otherwise ignore this error. This error message "
"will not be displayed again."),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"The transaction amount is too small to send after the fee has been deducted"),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"This error could occur if this wallet was not shutdown cleanly and was last "
"loaded using a build with a newer version of Berkeley DB. If so, please use "
"the software that last loaded this wallet"),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"This is a pre-release test build - use at your own risk - do not use for "
"mining or merchant applications"),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"This is the maximum transaction fee you pay (in addition to the normal fee) "
"to prioritize partial spend avoidance over regular coin selection."),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"This is the transaction fee you may discard if change is smaller than dust "
"at this level"),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"This is the transaction fee you may pay when fee estimates are not available."),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"Total length of network version string (%i) exceeds maximum length (%i). "
"Reduce the number or size of uacomments."),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"Unable to replay blocks. You will need to rebuild the database using -"
"reindex-chainstate."),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"Unknown wallet file format \"%s\" provided. Please provide one of \"bdb\" or "
"\"sqlite\"."),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"Warning: Dumpfile wallet format \"%s\" does not match command line specified "
"format \"%s\"."),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"Warning: Private keys detected in wallet {%s} with disabled private keys"),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"Warning: We do not appear to fully agree with our peers! You may need to "
"upgrade, or other nodes may need to upgrade."),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"Witness data for blocks after height %d requires validation. Please restart "
"with -reindex."),
QT_TRANSLATE_NOOP("monedadelmundo-core", ""
"You need to rebuild the database using -reindex to go back to unpruned "
"mode.  This will redownload the entire blockchain"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "%s is set very high!"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "-maxmempool must be at least %d MB"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "A fatal internal error occurred, see debug.log for details"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Cannot resolve -%s address: '%s'"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Cannot set -forcednsseed to true when setting -dnsseed to false."),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Cannot set -peerblockfilters without -blockfilterindex."),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Cannot write to data directory '%s'; check permissions."),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Config setting for %s only applied on %s network when in [%s] section."),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Copyright (C) %i-%i"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Corrupted block database detected"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Could not find asmap file %s"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Could not parse asmap file %s"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Disk space is too low!"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Do you want to rebuild the block database now?"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Done loading"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Dump file %s does not exist."),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Error creating %s"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Error initializing block database"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Error loading %s"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Error loading %s: Private keys can only be disabled during creation"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Error loading %s: Wallet corrupted"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Error loading %s: Wallet requires newer version of %s"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Error loading block database"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Error opening block database"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Error reading from database, shutting down."),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Error reading next record from wallet database"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Error upgrading chainstate database"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Error: Couldn't create cursor into database"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Error: Disk space is low for %s"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Error: Dumpfile checksum does not match. Computed %s, expected %s"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Error: Got key that was not hex: %s"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Error: Got value that was not hex: %s"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Error: Keypool ran out, please call keypoolrefill first"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Error: Missing checksum"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Error: No %s addresses available."),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Error: Unable to parse version %u as a uint32_t"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Error: Unable to write record to new wallet"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Failed to rescan the wallet during initialization"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Failed to verify database"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Fee rate (%s) is lower than the minimum fee rate setting (%s)"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Ignoring duplicate -wallet %s."),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Importing…"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Incorrect or no genesis block found. Wrong datadir for network?"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Initialization sanity check failed. %s is shutting down."),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Input not found or already spent"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Insufficient funds"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Invalid -i2psam address or hostname: '%s'"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Invalid -onion address or hostname: '%s'"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Invalid -proxy address or hostname: '%s'"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Invalid P2P permission: '%s'"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Invalid amount for -%s=<amount>: '%s'"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Invalid amount for -discardfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Invalid amount for -fallbackfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Invalid amount for -paytxfee=<amount>: '%s' (must be at least %s)"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Invalid netmask specified in -whitelist: '%s'"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Loading P2P addresses…"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Loading banlist…"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Loading block index…"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Loading wallet…"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Missing amount"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Missing solving data for estimating transaction size"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Need to specify a port with -whitebind: '%s'"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "No addresses available"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "No proxy server specified. Use -proxy=<ip> or -proxy=<ip:port>."),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Not enough file descriptors available."),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Prune cannot be configured with a negative value."),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Prune mode is incompatible with -coinstatsindex."),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Prune mode is incompatible with -txindex."),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Pruning blockstore…"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Reducing -maxconnections from %d to %d, because of system limitations."),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Replaying blocks…"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Rescanning…"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "SQLiteDatabase: Failed to execute statement to verify database: %s"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "SQLiteDatabase: Failed to prepare statement to verify database: %s"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "SQLiteDatabase: Failed to read database verification error: %s"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "SQLiteDatabase: Unexpected application id. Expected %u, got %u"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Section [%s] is not recognized."),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Signing transaction failed"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Specified -walletdir \"%s\" does not exist"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Specified -walletdir \"%s\" is a relative path"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Specified -walletdir \"%s\" is not a directory"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Specified blocks directory \"%s\" does not exist."),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Starting network threads…"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "The source code is available from %s."),
QT_TRANSLATE_NOOP("monedadelmundo-core", "The specified config file %s does not exist"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "The transaction amount is too small to pay the fee"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "The wallet will avoid paying less than the minimum relay fee."),
QT_TRANSLATE_NOOP("monedadelmundo-core", "This is experimental software."),
QT_TRANSLATE_NOOP("monedadelmundo-core", "This is the minimum transaction fee you pay on every transaction."),
QT_TRANSLATE_NOOP("monedadelmundo-core", "This is the transaction fee you will pay if you send a transaction."),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Transaction amount too small"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Transaction amounts must not be negative"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Transaction change output index out of range"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Transaction has too long of a mempool chain"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Transaction must have at least one recipient"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Transaction needs a change address, but we can't generate it."),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Transaction too large"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Unable to bind to %s on this computer (bind returned error %s)"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Unable to bind to %s on this computer. %s is probably already running."),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Unable to create the PID file '%s': %s"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Unable to generate initial keys"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Unable to generate keys"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Unable to open %s for writing"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Unable to parse -maxuploadtarget: '%s'"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Unable to start HTTP server. See debug log for details."),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Unknown -blockfilterindex value %s."),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Unknown address type '%s'"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Unknown change type '%s'"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Unknown new rules activated (versionbit %i)"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Unsupported logging category %s=%s."),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Upgrading UTXO database"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "User Agent comment (%s) contains unsafe characters."),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Verifying blocks…"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Verifying wallet(s)…"),
QT_TRANSLATE_NOOP("monedadelmundo-core", "Wallet needed to be rewritten: restart %s to complete"),
};
