#include <stdio.h>

int main(void)
{

    long int a = -2147483648;
    long int b = 2147483647;
    unsigned long int c = 0;
    unsigned long int d = 4294967294;

    printf("int %ld\n", a);
    printf("int %ld\n", b);
    printf("unsigned int %lu\n", c);
    printf("unsigned int %lu\n", d);

    return 0;
}