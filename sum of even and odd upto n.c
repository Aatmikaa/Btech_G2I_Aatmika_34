#include<stdio.h>
int main()
{
    int n,i,se=0,so=0;
    printf("enter the limit: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      if(i%2==0)
      se+=i;
      else
      so+=i;
    }
    printf("sum of even = %d \n",se);
    printf("sum of odd = %d",so);
    return 0;
}