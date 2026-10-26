#include <stdio.h>

int main()
{
    int A, B = 0;

    printf("Enter a number: ");
    scanf("%d", &A);
    for (; A != 0; A /= 10)
    {
        B++;
    }

    printf("Total digits = %d", B);

    return 0;
}

