// Copyright (c) 2015 Evoshi Un
// Copyright (c) 2015 Posex
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef PEXTION_INIT_H
#define PEXTION_INIT_H

#include "wallet.h"

extern CWallet* pwalletMain;
void StartShutdown();
void Shutdown(void* parg);
bool AppInit2();
std::string HelpMessage();

#endif
