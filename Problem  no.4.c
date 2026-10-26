#include<stdio.h>
int main ()
{
    int N=0,B=0;
    printf("Enter the number:");
    scanf("%d",&N);
    for(int i=1; i<=N; i++)
    {
        if(i%2==0)
        {
            B+=i;
        }
    }
    printf("Sum of even numbers are:%d",B);
    return 0;
}
