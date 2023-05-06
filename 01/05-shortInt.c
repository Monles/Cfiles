#include <stdio.h>

int main(void)
{

    short int a = 32767;
    short int b = -32768;
    unsigned short int c = 0;
    unsigned short int d = 65535;

    printf("int %hd\n", a);
    printf("int %hd\n", b);
    printf("unsigned int %hu\n", c);
    printf("unsigned int %hu\n", d);

    return 0;
}