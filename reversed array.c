#include<stdio.h>
int main()
{
    int n;
    printf("enter number of elements in an array:");
    scanf("%d",&n);
    int a[n];
    int i;
    printf("Enter  elements in array");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    printf("reversed array: \n");
    for(i=n-1;i>=0;i--)
    {
        printf(" %d \n",a[i]);
    }
    return 0;
}