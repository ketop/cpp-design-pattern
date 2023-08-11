#include "Singleton.h"
#include <cstdio>
#include <string>
using namespace ketop::dp;
static const unsigned buf_size = 20;

Singleton& Singleton::instance()
{
    static Singleton sl;
    return sl;
}

std::string Singleton::echo()
{
    std::string buff(buf_size, 0);
    sprintf(&buff[0], "Address:%p", this);
    return buff;
}