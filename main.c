#define __MKT_THIRD__
#include <base/utils.h>

#define BYTE_TO_BINARY(byte)  \
  (byte & 0x80 ? '1' : '0'), \
  (byte & 0x40 ? '1' : '0'), \
  (byte & 0x20 ? '1' : '0'), \
  (byte & 0x10 ? '1' : '0'), \
  (byte & 0x08 ? '1' : '0'), \
  (byte & 0x04 ? '1' : '0'), \
  (byte & 0x02 ? '1' : '0'), \
  (byte & 0x01 ? '1' : '0') 

int main(USER_INPUT)
{
    SETUP_ERR

    char ca = 100;
    char cb = -100;

    printf("\ntest: %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c %d %d %d %d\n",BYTE_TO_BINARY(ca),BYTE_TO_BINARY(cb),BYTE_TO_BINARY(-100),ca,cb,*(char*)MKTabs(&ca),*(char*)MKTabs(&cb));

    CHECK_UI(1,"something")
        printf("it works\n");

    RETURN_ERR
}

//01100100
//00011100