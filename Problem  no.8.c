#include <stdio.h>

int main()
{
    int A,B=0,i=0;
    printf("Enter numbers: ");
    scanf("%d",&A);
    while (i<A)
    {
        i++;
        B+=i;
    }
    printf("%d",B);
    return 0;
}
