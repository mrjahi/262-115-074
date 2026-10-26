#include <stdio.h>
int main ()
{
    int N=0;
    printf("Enter the number:");
    scanf("%d",&N);
    for (int i=N;i>=1;i--)
    {
        printf("%d\n",i);
    }
    return 0;
}
