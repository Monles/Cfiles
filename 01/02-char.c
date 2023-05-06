#include <stdio.h>

int main(void)
{

    char game = 80;             // 1 byte (-128 to +127) %d or %c
    unsigned char ungame = 124; // 1 byte (0 to 255) %d or %c

    printf("%c\n", game);
    printf("%c\n", ungame);

    printf("%d\n", game);
    printf("%d\n", ungame);

    return 0;
}