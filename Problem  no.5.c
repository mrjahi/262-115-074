#include<stdio.h>
int main ()
{
    int A,B,C;
    printf("Give a number up to 10:");
    scanf("%d",&A);
    for(int i=1; i<=10; i++)
    {
        printf("%d x %d = %d\n",A,i,A*i);
    }

    return 0;
}
