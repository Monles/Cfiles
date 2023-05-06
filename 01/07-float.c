#include <stdio.h>

int main(void)
{

    float gpa = 3.14159;       // 4 byte, 6 - 7 digits %f
    double piv = 3.1415926535; // 8 bytes, 15 - 16 digits %1f

    printf("GPA is %f\n", gpa);
    printf("PI value is %1f\n", piv);

    return 0;
}