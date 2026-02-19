#include <stdio.h>
int main()
{
    int i,n,se=0,so=0;
    printf("Enter value of N:");
    scanf("%d", &n);
    int a[n];
     for(i=0;i<n;i++)
     {
      a[i]=i+1;
     }
     for(i=0;i<n;i++)
     {
         if(a[i]%2==0)
         se=se+a[i];
         else 
         so=so+a[i];
     }
     printf("sum of even number = %d \n",se);
     printf("sum of even number = %d \n",so);
     return 0;
}
     