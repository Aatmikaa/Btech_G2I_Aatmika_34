#include<stdio.h>
int main()
{
    int a,b,t;
    printf("Enter two numbers a and b:");
    scanf("%d %d",&a,&b);
    t=a;
    a=b;
    b=t;
    printf("Swapped numbers are: a=%d and b=%d",a,b);
     return 0;
}