// SPDX-FileCopyrightText: © 2020 Alias Developers
// SPDX-FileCopyrightText: © 2016 SpectreCoin Developers
// SPDX-FileCopyrightText: © 2009 Bitcoin Developers
//
// SPDX-License-Identifier: MIT

#include <QtGlobal>
// Automatically generated by extract_strings.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *alias_strings[] = {
QT_TRANSLATE_NOOP("alias-core", "To use the %s option"),
QT_TRANSLATE_NOOP("alias-core", ""
"%s, you must set a rpcpassword in the configuration file:\n"
"%s\n"
"It is recommended you use the following random password:\n"
"rpcuser=aliasrpc\n"
"rpcpassword=%s\n"
"(you do not need to remember this password)\n"
"The username and password MUST NOT be the same.\n"
"If the file does not exist, create it with owner-readable-only file "
"permissions.\n"
"It is also recommended to set alertnotify so you are notified of problems;\n"
"for example: alertnotify=echo %%s | mail -s \"Alias Alert\" admin@foo."
"com\n"),
QT_TRANSLATE_NOOP("alias-core", "Error"),
QT_TRANSLATE_NOOP("alias-core", ""
"An error occurred while setting up the RPC port %u for listening on IPv6, "
"falling back to IPv4: %s"),
QT_TRANSLATE_NOOP("alias-core", ""
"An error occurred while setting up the RPC port %u for listening on IPv4: %s"),
QT_TRANSLATE_NOOP("alias-core", ""
"You must set rpcpassword=<password> in the configuration file:\n"
"%s\n"
"If the file does not exist, create it with owner-readable-only file "
"permissions."),
QT_TRANSLATE_NOOP("alias-core", "Alias version"),
QT_TRANSLATE_NOOP("alias-core", "Usage:"),
QT_TRANSLATE_NOOP("alias-core", "Send command to -server or aliaswalletd"),
QT_TRANSLATE_NOOP("alias-core", "List commands"),
QT_TRANSLATE_NOOP("alias-core", "Get help for a command"),
QT_TRANSLATE_NOOP("alias-core", "Alias"),
QT_TRANSLATE_NOOP("alias-core", "Options:"),
QT_TRANSLATE_NOOP("alias-core", "This help message"),
QT_TRANSLATE_NOOP("alias-core", "Specify configuration file (default: alias.conf)"),
QT_TRANSLATE_NOOP("alias-core", "Specify pid file (default: alias.pid)"),
QT_TRANSLATE_NOOP("alias-core", "Specify data directory"),
QT_TRANSLATE_NOOP("alias-core", "Specify wallet file (within data directory)"),
QT_TRANSLATE_NOOP("alias-core", "Set database cache size in megabytes (default: 25)"),
QT_TRANSLATE_NOOP("alias-core", "Set database disk log size in megabytes (default: 100)"),
QT_TRANSLATE_NOOP("alias-core", "Specify connection timeout in milliseconds (default: 5000)"),
QT_TRANSLATE_NOOP("alias-core", "Connect through socks proxy"),
QT_TRANSLATE_NOOP("alias-core", "Select the version of socks proxy to use (4-5, default: 5)"),
QT_TRANSLATE_NOOP("alias-core", "Use proxy to reach tor hidden services (default: same as -proxy)"),
QT_TRANSLATE_NOOP("alias-core", "Allow DNS lookups for -addnode, -seednode and -connect"),
QT_TRANSLATE_NOOP("alias-core", "Listen for connections on <port> (default: 37347 or testnet: 37111)"),
QT_TRANSLATE_NOOP("alias-core", "Maintain at most <n> connections to peers (default: 125)"),
QT_TRANSLATE_NOOP("alias-core", "Add a node to connect to and attempt to keep the connection open"),
QT_TRANSLATE_NOOP("alias-core", "Connect only to the specified node(s)"),
QT_TRANSLATE_NOOP("alias-core", "Connect to a node to retrieve peer addresses, and disconnect"),
QT_TRANSLATE_NOOP("alias-core", "Specify your own public address"),
QT_TRANSLATE_NOOP("alias-core", "Only connect to nodes in network <net> (IPv4, IPv6 or Tor)"),
QT_TRANSLATE_NOOP("alias-core", "Discover own IP address (default: 1 when listening and no -externalip)"),
QT_TRANSLATE_NOOP("alias-core", "Find peers using internet relay chat (default: 0)"),
QT_TRANSLATE_NOOP("alias-core", "Accept connections from outside (default: 1 if no -proxy or -connect)"),
QT_TRANSLATE_NOOP("alias-core", "Bind to given address. Use [host]:port notation for IPv6"),
QT_TRANSLATE_NOOP("alias-core", "Find peers using DNS lookup (default: 1)"),
QT_TRANSLATE_NOOP("alias-core", "Stake your coins to support network and gain reward (default: 1)"),
QT_TRANSLATE_NOOP("alias-core", ""
"Sync time with other nodes. Disable if time on your system is precise e.g. "
"syncing with NTP (default: 1)"),
QT_TRANSLATE_NOOP("alias-core", "Sync checkpoints policy (default: strict)"),
QT_TRANSLATE_NOOP("alias-core", "Threshold for disconnecting misbehaving peers (default: 100)"),
QT_TRANSLATE_NOOP("alias-core", ""
"Number of seconds to keep misbehaving peers from reconnecting (default: "
"86400)"),
QT_TRANSLATE_NOOP("alias-core", "Maximum per-connection receive buffer, <n>*1000 bytes (default: 5000)"),
QT_TRANSLATE_NOOP("alias-core", "Maximum per-connection send buffer, <n>*1000 bytes (default: 1000)"),
QT_TRANSLATE_NOOP("alias-core", "Use UPnP to map the listening port (default: 1 when listening)"),
QT_TRANSLATE_NOOP("alias-core", "Use UPnP to map the listening port (default: 0)"),
QT_TRANSLATE_NOOP("alias-core", ""
"Detach block and address databases. Increases shutdown time (default: 0)"),
QT_TRANSLATE_NOOP("alias-core", "Fee per KB to add to transactions you send"),
QT_TRANSLATE_NOOP("alias-core", ""
"When creating transactions, ignore inputs with value less than this "
"(default: 0.01)"),
QT_TRANSLATE_NOOP("alias-core", "Accept command line and JSON-RPC commands"),
QT_TRANSLATE_NOOP("alias-core", "Run in the background as a daemon and accept commands"),
QT_TRANSLATE_NOOP("alias-core", "Use the test network"),
QT_TRANSLATE_NOOP("alias-core", "Output extra debugging information. Implies all other -debug* options"),
QT_TRANSLATE_NOOP("alias-core", "Output extra network debugging information"),
QT_TRANSLATE_NOOP("alias-core", "Prepend debug output with timestamp"),
QT_TRANSLATE_NOOP("alias-core", "Shrink debug.log file on client startup (default: 1 when no -debug)"),
QT_TRANSLATE_NOOP("alias-core", "Send trace/debug info to console instead of debug.log file"),
QT_TRANSLATE_NOOP("alias-core", "Send trace/debug info to debugger"),
QT_TRANSLATE_NOOP("alias-core", "Username for JSON-RPC connections"),
QT_TRANSLATE_NOOP("alias-core", "Password for JSON-RPC connections"),
QT_TRANSLATE_NOOP("alias-core", ""
"Listen for JSON-RPC connections on <port> (default: 36657 or testnet: 36757)"),
QT_TRANSLATE_NOOP("alias-core", "Allow JSON-RPC connections from specified IP address"),
QT_TRANSLATE_NOOP("alias-core", "Send commands to node running on <ip> (default: 127.0.0.1)"),
QT_TRANSLATE_NOOP("alias-core", ""
"Execute command when the best block changes (%s in cmd is replaced by block "
"hash)"),
QT_TRANSLATE_NOOP("alias-core", ""
"Execute command when a wallet transaction changes (%s in cmd is replaced by "
"TxID)"),
QT_TRANSLATE_NOOP("alias-core", "Require a confirmations for change (default: 0)"),
QT_TRANSLATE_NOOP("alias-core", ""
"Enforce transaction scripts to use canonical PUSH operators (default: 1)"),
QT_TRANSLATE_NOOP("alias-core", ""
"Execute command when a relevant alert is received (%s in cmd is replaced by "
"message)"),
QT_TRANSLATE_NOOP("alias-core", "Upgrade wallet to latest format"),
QT_TRANSLATE_NOOP("alias-core", "Set key pool size to <n> (default: 100)"),
QT_TRANSLATE_NOOP("alias-core", "Rescan the block chain for missing wallet transactions"),
QT_TRANSLATE_NOOP("alias-core", "Attempt to recover private keys from a corrupt wallet.dat"),
QT_TRANSLATE_NOOP("alias-core", "How many blocks to check at startup (default: 2500, 0 = all)"),
QT_TRANSLATE_NOOP("alias-core", "How thorough the block verification is (0-6, default: 1)"),
QT_TRANSLATE_NOOP("alias-core", "Imports blocks from external blk000?.dat file"),
QT_TRANSLATE_NOOP("alias-core", "Block creation options:"),
QT_TRANSLATE_NOOP("alias-core", "Set minimum block size in bytes (default: 0)"),
QT_TRANSLATE_NOOP("alias-core", "Set maximum block size in bytes (default: 250000)"),
QT_TRANSLATE_NOOP("alias-core", ""
"Set maximum size of high-priority/low-fee transactions in bytes (default: "
"27000)"),
QT_TRANSLATE_NOOP("alias-core", "SSL options: (see the Bitcoin Wiki for SSL setup instructions)"),
QT_TRANSLATE_NOOP("alias-core", "Use OpenSSL (https) for JSON-RPC connections"),
QT_TRANSLATE_NOOP("alias-core", "Server certificate file (default: server.cert)"),
QT_TRANSLATE_NOOP("alias-core", "Server private key (default: server.pem)"),
QT_TRANSLATE_NOOP("alias-core", ""
"Acceptable ciphers (default: TLSv1+HIGH:!SSLv2:!aNULL:!eNULL:!AH:!3DES:"
"@STRENGTH)"),
QT_TRANSLATE_NOOP("alias-core", "Invalid amount for -paytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("alias-core", ""
"Warning: -paytxfee is set very high! This is the transaction fee you will "
"pay if you send a transaction."),
QT_TRANSLATE_NOOP("alias-core", "Invalid amount for -mininput=<amount>: '%s'"),
QT_TRANSLATE_NOOP("alias-core", "Wallet %s resides outside data directory %s."),
QT_TRANSLATE_NOOP("alias-core", ""
"Cannot obtain a lock on data directory %s.  Alias is probably already "
"running."),
QT_TRANSLATE_NOOP("alias-core", "Verifying database integrity..."),
QT_TRANSLATE_NOOP("alias-core", ""
"Error initializing database environment %s! To recover, BACKUP THAT "
"DIRECTORY, then remove everything from it except for wallet.dat."),
QT_TRANSLATE_NOOP("alias-core", ""
"Warning: wallet.dat corrupt, data salvaged! Original wallet.dat saved as "
"wallet.{timestamp}.bak in %s; if your balance or transactions are incorrect "
"you should restore from a backup."),
QT_TRANSLATE_NOOP("alias-core", "wallet.dat corrupt, salvage failed"),
QT_TRANSLATE_NOOP("alias-core", "Unknown -socks proxy version requested: %i"),
QT_TRANSLATE_NOOP("alias-core", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("alias-core", "Invalid -proxy address: '%s'"),
QT_TRANSLATE_NOOP("alias-core", "Invalid -tor address: '%s'"),
QT_TRANSLATE_NOOP("alias-core", "Cannot resolve -bind address: '%s'"),
QT_TRANSLATE_NOOP("alias-core", "Failed to listen on any port."),
QT_TRANSLATE_NOOP("alias-core", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("alias-core", "Cannot resolve -externalip address: '%s'"),
QT_TRANSLATE_NOOP("alias-core", "Invalid amount for -reservebalance=<amount>"),
QT_TRANSLATE_NOOP("alias-core", "Unable to sign checkpoint, wrong checkpointkey?\n"),
QT_TRANSLATE_NOOP("alias-core", "Loading block index..."),
QT_TRANSLATE_NOOP("alias-core", "Error loading blk0001.dat"),
QT_TRANSLATE_NOOP("alias-core", "Loading wallet..."),
QT_TRANSLATE_NOOP("alias-core", "Error loading wallet.dat: Wallet corrupted"),
QT_TRANSLATE_NOOP("alias-core", ""
"Warning: error reading wallet.dat! All keys read correctly, but transaction "
"data or address book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("alias-core", "Error loading wallet.dat: Wallet requires newer version of Alias"),
QT_TRANSLATE_NOOP("alias-core", "Wallet needed to be rewritten: restart Alias to complete"),
QT_TRANSLATE_NOOP("alias-core", "Error loading wallet.dat"),
QT_TRANSLATE_NOOP("alias-core", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("alias-core", "Cannot initialize keypool"),
QT_TRANSLATE_NOOP("alias-core", "Cannot write default address"),
QT_TRANSLATE_NOOP("alias-core", "Rescanning..."),
QT_TRANSLATE_NOOP("alias-core", "Importing blockchain data file."),
QT_TRANSLATE_NOOP("alias-core", "Importing bootstrap blockchain data file."),
QT_TRANSLATE_NOOP("alias-core", "Loading addresses..."),
QT_TRANSLATE_NOOP("alias-core", "Error: could not start node"),
QT_TRANSLATE_NOOP("alias-core", "Done loading"),
QT_TRANSLATE_NOOP("alias-core", ""
"Unable to bind to %s on this computer. Alias is probably already running."),
QT_TRANSLATE_NOOP("alias-core", "Unable to bind to %s on this computer (bind returned error %d, %s)"),
QT_TRANSLATE_NOOP("alias-core", "Error: Wallet locked, unable to create transaction  "),
QT_TRANSLATE_NOOP("alias-core", "Error: Wallet unlocked for staking only, unable to create transaction."),
QT_TRANSLATE_NOOP("alias-core", ""
"Error: This transaction requires a transaction fee of at least %s because of "
"its amount, complexity, or use of recently received funds  "),
QT_TRANSLATE_NOOP("alias-core", "Error: Transaction creation failed  "),
QT_TRANSLATE_NOOP("alias-core", "Sending..."),
QT_TRANSLATE_NOOP("alias-core", ""
"Error: The transaction was rejected.  This might happen if some of the coins "
"in your wallet were already spent, such as if you used a copy of wallet.dat "
"and coins were spent in the copy but not marked as spent here."),
QT_TRANSLATE_NOOP("alias-core", "Invalid amount"),
QT_TRANSLATE_NOOP("alias-core", "Insufficient funds"),
QT_TRANSLATE_NOOP("alias-core", ""
"Warning: Please check that your computer's date and time are correct! If "
"your clock is wrong Alias will not work properly."),
QT_TRANSLATE_NOOP("alias-core", "Warning: This version is obsolete, upgrade required!"),
QT_TRANSLATE_NOOP("alias-core", "WARNING: syncronized checkpoint violation detected, but skipped!"),
QT_TRANSLATE_NOOP("alias-core", "Warning: Disk space is low!"),
QT_TRANSLATE_NOOP("alias-core", ""
"WARNING: Invalid checkpoint found! Displayed transactions may not be "
"correct! You may need to upgrade, or notify developers."),
QT_TRANSLATE_NOOP("alias-core", "Read ATXOs... (%d)"),
QT_TRANSLATE_NOOP("alias-core", "Read spent ATXOs... (%d)"),
QT_TRANSLATE_NOOP("alias-core", "Note must be 24 characters or less."),
QT_TRANSLATE_NOOP("alias-core", "Error: The transaction was rejected. "
"This might happen if some of the coins in your wallet were already spent, such as "
"if you used a copy of wallet.dat and coins were spent in the copy but not marked as spent here."),
QT_TRANSLATE_NOOP("alias-core", "Error: Unsupported argument -socks found. Setting SOCKS version isn't possible anymore, only SOCKS5 proxies are supported."),
QT_TRANSLATE_NOOP("alias-core", "Initialization sanity check failed. Alias is shutting down."),
QT_TRANSLATE_NOOP("alias-core", "Loading block index... (%d)"),
QT_TRANSLATE_NOOP("alias-core", "Calculating chain trust... (%d)"),
QT_TRANSLATE_NOOP("alias-core", "Validating last %d block..."),
QT_TRANSLATE_NOOP("alias-core", "-bip44key is not allowed if wallet.dat already exists"),
QT_TRANSLATE_NOOP("alias-core", "Cannot obtain a lock on data directory %s.  Alias is probably already running."),
QT_TRANSLATE_NOOP("alias-core", "Cannot resolve binding address: '%s'"),
QT_TRANSLATE_NOOP("alias-core", "Error: could not start tor node"),
QT_TRANSLATE_NOOP("alias-core", "Timed out waiting for onion hostname."),
QT_TRANSLATE_NOOP("alias-core", "Error loading blk0001.dat: Invalid chain detected, please resync or use bootstrap files."),
QT_TRANSLATE_NOOP("alias-core", "Loading wallet items... (%d)"),
QT_TRANSLATE_NOOP("alias-core", "Warning: error reading wallet.dat! All keys read correctly, but transaction data "
"or address book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("alias-core", "Reindexing from blk000?.dat files."),
QT_TRANSLATE_NOOP("alias-core", "Reindexing block... (%d)"),
QT_TRANSLATE_NOOP("alias-core", "Core started!"),
QT_TRANSLATE_NOOP("alias-core", "Use tor hidden services version 2 instead of version 3"),
QT_TRANSLATE_NOOP("alias-core", "Find peers using .onion seeds (default: 1 unless -connect)"),
QT_TRANSLATE_NOOP("alias-core", "Minimum time in seconds between successful stakes (default: 30)"),
QT_TRANSLATE_NOOP("alias-core", "Percentage of staking rewards to donate to the developers (between 0 and 100 inclusive, default 5)"),
QT_TRANSLATE_NOOP("alias-core", "Milliseconds between stake attempts. Lowering this param will not result in more stakes. (default: 500)"),
QT_TRANSLATE_NOOP("alias-core", "Number of seconds to keep soft banned peers from reconnecting (default: 3600)"),
QT_TRANSLATE_NOOP("alias-core", "Simple command line interface - if not run as daemon"),
QT_TRANSLATE_NOOP("alias-core", "Output extra blockchain debugging information"),
QT_TRANSLATE_NOOP("alias-core", "Output extra Proof of Stake debugging information"),
QT_TRANSLATE_NOOP("alias-core", "Send trace/debug info to debug.log file"),
QT_TRANSLATE_NOOP("alias-core", "Wait for RPC server to start"),
QT_TRANSLATE_NOOP("alias-core", "Keep at most <n> MiB of unconnectable blocks in memory (default: %u)"),
QT_TRANSLATE_NOOP("alias-core", "Rebuild block chain index from current blk000?.dat files on startup"),
QT_TRANSLATE_NOOP("alias-core", "Show version and exit"),
QT_TRANSLATE_NOOP("alias-core", "Thin options:"),
QT_TRANSLATE_NOOP("alias-core", "Operate in less secure, less resource hungry 'thin' mode"),
QT_TRANSLATE_NOOP("alias-core", "Keep the entire block index in memory. (default: 0)"),
QT_TRANSLATE_NOOP("alias-core", "When not thinfullindex, the max number of block headers to keep in memory. (default: 4096)"),
QT_TRANSLATE_NOOP("alias-core", "Disable supporting thin nodes. (default: 0)"),
QT_TRANSLATE_NOOP("alias-core", "Disable forwarding, or requesting all stealth txns. (default: 0)"),
QT_TRANSLATE_NOOP("alias-core", "Don't connect to more than <n> thin peers (default: 8)"),
QT_TRANSLATE_NOOP("alias-core", "Acceptable ciphers (default: TLSv1.2+HIGH:TLSv1+HIGH:!SSLv2:!aNULL:!eNULL:!3DES:@STRENGTH)"),
QT_TRANSLATE_NOOP("alias-core", "conn"),
QT_TRANSLATE_NOOP("alias-core", "Error: Wallet locked, unable to create transaction."),
QT_TRANSLATE_NOOP("alias-core", "Error: Must be in full mode."),
QT_TRANSLATE_NOOP("alias-core", "Error: Block chain must be fully synced first."),
QT_TRANSLATE_NOOP("alias-core", "Error: Alias is not connected!"),
QT_TRANSLATE_NOOP("alias-core", "Update balance..."),
QT_TRANSLATE_NOOP("alias-core", "...Start UI..."),
QT_TRANSLATE_NOOP("alias-core", "Shutdown..."),
};
