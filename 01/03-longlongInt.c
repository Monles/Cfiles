#include <stdio.h>

int main(void)
{

    long long int a = 9223372036854775808 - 1;
    long long int b = -9223372036854775808;
    unsigned long long int c = 0;
    unsigned long long int d = 18446744073709551615;

    printf("long long int %lld\n", a);
    printf("long long int %lld\n", b);
    printf("unsigned long long int %llu\n", c);
    printf("unsigned long long int %llu\n", d);

    return 0;
}