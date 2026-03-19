#include<stdio.h>
int main()
{
    int n,i,m=1;
    printf("enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
      m=n*i;
    printf(" %d x %d = %d \n",n,i,m);
    }
    return 0;
}