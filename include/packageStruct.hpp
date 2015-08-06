#ifndef __PACKAGESTRUCT_H__
#define __PACKAGESTRUCT_H__
#include "baseHeader.h"

#pragma pack(1)

//c->s 1-1
struct c_s_registersession
{
    int16 sessionType; // 1: client 2:gateway 3:other accsvr 4:gameserver 5:dbserver 6:strictClient
};
//s-c 1-1 return
struct s_c_registersession
{
    int16 retcode; // 0:success >0: error code
};

//c-s 1-2  
struct c_s_refecttest
{
    int16 strlen;
    char *buf;
};

//s-c 1-2 ret = c_s_refecttest
/*
struct c_s_refecttest
{
    int16 strlen;
    char *buf;
};
*/
#endif
