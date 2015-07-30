#ifndef __NETWORKOBJECT_H__
#define __NETWORKOBJECT_H__
//#include "Session.h"
#include "../include/baseHeader.h"
class CSession;

class NetWorkObject
{
public:
    NetWorkObject() {}
    virtual ~NetWorkObject() {}

    virtual Int32 onRecv() {}
    virtual Int32 processSend() {}

    inline void setSesion(CSession* session)
    {
        m_pSession = session;
    }

private:
    CSession *m_pSession;
};
#endif // __NETWORKOBJECT_H__