#include<stdio.h>
int main()
{
    int n,ce=0,co=0;
    printf("enter number of elements in an array:");
    scanf("%d",&n);
    int a[n];
    int i;
    printf("Enter  elements in array");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        ce++;
        else
        co++;
    }
    printf("number of even numbers in array: %d \n",ce);
    printf("number of odd numbers in array: %d",co);
    return 0;
}