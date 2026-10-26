#include <stdio.h>

int main()
{
    int N, fact = 1, i = 1;

    printf("Enter a number: ");
    scanf("%d", &N);

    while (i <= N)
    {
        fact = fact * i;
        i++;
    }

    printf("Factorial = %d", fact);

    return 0;
}
