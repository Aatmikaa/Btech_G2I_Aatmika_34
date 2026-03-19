#include<stdio.h>
int main()
{
    int a,b,c,d,e,sum=0;
    float pcr;
    printf("enter marks of five subjects");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    pcr=sum/5;
    printf("sum of marks of five subjects = %d \n",sum);
     printf("percentage of marks of five subjects = %0.2f \n",pcr);
     return 0;
}