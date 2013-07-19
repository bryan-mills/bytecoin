#ifndef QTIPCSERVER_H
#define QTIPCSERVER_H

#include <string>

// Define Bytecoin-Qt message queue name for mainnet
#define BITCOINURI_QUEUE_NAME_MAINNET "BytecoinURI"
// Define Bytecoin-Qt message queue name for testnet
#define BITCOINURI_QUEUE_NAME_TESTNET "BytecoinURI-testnet"

extern std::string strBytecoinURIQueueName;

void ipcScanRelay(int argc, char *argv[]);
void ipcInit(int argc, char *argv[]);

#endif // QTIPCSERVER_H
