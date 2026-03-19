#include<stdio.h>
int main()
{
    int n,rev=0;
    printf("enter the number: ");
    scanf("%d",&n);
    int num=n;
    while(num>0)
    {
       
     int dig=num%10;
     rev=rev*10+dig;
     num=num/10;
    }
    if(rev==n)
    printf("number of palindrome");
    else
      printf("number of not palindrome");
    return 0;
}