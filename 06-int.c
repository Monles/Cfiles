#include <stdio.h>

int main(void)
{

    int a = 2147483647;
    unsigned int b = 4294967294;
    int c = -2147483648;

    printf("int %d\n", a);
    printf("unsigned int %u\n", b);
    printf("int %u\n", c);

    return 0;
}