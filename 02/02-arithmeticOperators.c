#include <stdio.h>

int main(void)
{

    int a = 7;
    int b = 2;

    a = a - 3;
    a -= 3;

    b = 2 + 6;
    b += 6;

    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
}