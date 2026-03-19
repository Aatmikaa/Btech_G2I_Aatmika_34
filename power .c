#include<stdio.h>
int main()
{
    int n,i ,p,ans=1;
    printf("enter the number: ");
    scanf("%d",&n);
    printf("enter power:");
    scanf("%d",&p);
    for(i=1;i<=p;i++)
    {
    ans=ans*n;
    }
    printf("%d ^ %d = %d",n,p,ans);
    return 0;
}