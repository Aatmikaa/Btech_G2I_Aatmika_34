#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers A,B and C:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && b>c)
    printf("A i.e %d numbers is greatest.",a);
    else if(b>a && b>c)
    printf("B i.e %d numbers is greatest.",b);
    else
    printf("C i.e %d numbers is greatest.",c);
     return 0;
}