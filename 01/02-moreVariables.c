#include <stdbool.h>
#include <stdio.h>

int main(void)
{

    char game = 123;            // 1 byte (-128 to +127) %d or %c
    unsigned char ungame = 255; // 1 byte (0 to 255) %d or %c

    printf("%c", game);
    printf("%c", ungame);

    return 0;
}