#include <stdio.h>
#include <math.h>
void main()
{
    int n,x,sum=0,i=1,fact=1;
    printf("Enter the value of x and n:");
    scanf("%d %d",&x,&n);
    for(;i<=n;i++)
    {
        fact+=i;
        sum+=pow(-1,n)*(pow(x,i)/fact);
    }
    printf("Sum=%d",sum);
}
