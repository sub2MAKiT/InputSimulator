#define __MKT_THIRD__
#include "./src/MKT/headers/base/utils.h"

int main(USER_INPUT)
{
    SETUP_ERR

    if(MKTstrCmp(argv[1], "something"))
        printf("it works");

    RETURN_ERR
}