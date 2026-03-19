#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t;
    float si,ci;
    printf("enter principal amount:");
    scanf("%f",&p);
     printf("enter rate of interest:");
    scanf("%f",&r);
     printf("enter time in years:");
    scanf("%f",&t);
    si=(p*r*t)/100;
    ci=p*pow(1+r/100,t)-p;
    printf("simple interest = %0.2f Rs.\n",si);
    printf("compound interest = %0.2f Rs. \n",ci);
     return 0;
}