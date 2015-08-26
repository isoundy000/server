#ifndef __SERVERINCLUDE_H__
#define __SERVERINCLUDE_H__
#include "../session/ClientSession.h"
#include "../Factory/BaseFactory.h"
#include "../AccSvr/include/SessionHandler.hpp"

//Define the global server utilities
CBaseFactory<ClientSession> g_ClientNetWorkObjectFactory;
CAccHandlerMgr g_AccHandlerMgr;


#endif