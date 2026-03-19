#include<stdio.h>
int main()
{
    int n,rev=0;
    printf("enter the number: ");
    scanf("%d",&n);
    int num=n;
    int c=0;
    while(num>0)
    {
       
     int dig=num%10;
     c++;
     num=num/10;
    }
    printf("number of digits in %d = %d ",n,c);
    return 0;
}