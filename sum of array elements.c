#include<stdio.h>
int main()
{
    int n,se=0;
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
        se+=a[i];
    }
    printf("sum of elements of array = %d",se);
    return 0;
}