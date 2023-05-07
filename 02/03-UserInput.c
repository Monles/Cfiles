#include <stdio.h>

int main(void)
{

    char n[15];
    int gpa;

    printf("\n What's your name? ");
    scanf("%s", &n);

    printf("\n What's your gpa? ");
    scanf("%d", &gpa);

    printf("\nHey %s, wazzzzup?!! ", n);
    printf("\nYour GPA is %d.", gpa);

    return 0;
}
