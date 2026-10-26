#include <stdio.h>

int main()
{
    int num, i = 2;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (i < num)
    {
        if (num % i == 0)
        {
            printf("Not Prime");
            return 0;
        }
        i++;
    }

    printf("Prime");

    return 0;
}
