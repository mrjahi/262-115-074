#include <stdio.h>
int main()
{
    int A=0,B=0;
    printf("Enter the number:");
    scanf("%d",&A);
    for (int i=1; i<=A; i++)
    {
        B+=i;
    }
    printf("Sum=%d",B);
    return 0;
}
