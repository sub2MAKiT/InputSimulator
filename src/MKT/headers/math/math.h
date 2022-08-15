#include <base/defines.h>

void * MKTabs(void*in)
{
    *(unsigned char*)in = *(unsigned char*)in&127;
}