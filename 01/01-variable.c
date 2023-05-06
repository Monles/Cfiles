#include <stdio.h>
#include <stdbool.h>

int main(void)
{

    int age = 18;
    float gpa = 3.14159;       // 4 byte, 6 - 7 digits %f
    double piv = 3.1415926535; // 8 bytes, 15 - 16 digits %1f

    bool isValid = true; // 1 byte - %d

    print("Boolean is %d", isValid);

    return 0;
}