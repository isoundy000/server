#ifndef __PACKAGEHANDLER_H__
#define __PACKAGEHANDLER_H__
#include "../include/baseHeader.h"
#include "packHeader.hpp"
#include "../network/include/Session.h"
#include "../network/include/NetWorkObject.h"

//class CSession;

enum sysid
{
    SYS_SESSION_REGISTER = 1,

};

enum msgid
{
    C_S_SISSION_REGISTER = 1,
};

void handlePackage(CSession *pSession, PkgHeader *header, char *msgbuf, int32 msgsize);
void handlePackage(CSession *pSession, PkgHeader *header, MsgHeader *msgHead, char *msgbuf, int32 msgsize);
void decodeMsgHead(MsgHeader &msghead, char *buf, int32 buffsize);

void encodepkg(char *buf, PkgHeader *head, MsgHeader *msgHead, char *msgbuf, int32 msgbufsize);

typedef struct pkgFuncBase
{
    int32 funckey;
}PKGFUNCBASE;



template<typename FUNCTYPE>
class CPackageMgr
{
    typedef map<int32, PKGFUNCBASE *> FuncMap;
public:
    CPackageMgr();
    ~CPackageMgr();
    void registerFunc(int16 sysid, int16 msgid, )

private:
    FuncMap m_functionMap;
};

#endif
