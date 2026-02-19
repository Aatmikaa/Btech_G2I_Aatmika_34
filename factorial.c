#include <stdio.h>
int main()
{
    int f=1,i,n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    printf("Factorial is: ");
    for(i=1;i<=n;i++)
    {
        f=f*i;
        printf("%d",f);
        printf("\t");
    }
    return 0;
}