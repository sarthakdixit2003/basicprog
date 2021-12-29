#include <stdio.h>
void main()
{
    int n,i,j,counter;
    printf("Enter any number:");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        counter=i;
        for(j=1;j<=i;j++)
        {
            printf("%d ",counter);
            counter-=1;
        }
        printf("\n");
    }
}
