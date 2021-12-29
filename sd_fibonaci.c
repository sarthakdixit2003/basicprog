#include <stdio.h>
void main()
{
    int n,f1=0,f2=1,i=1,temp;
    printf("Enter any number:");
    scanf("%d",&n);
    printf("%d ",f1);
    for(i=1;i<=n;i++)
    {
        printf("%d ",f2);
        temp=f2;
        f2+=f1;
        f1=temp;
    }
}
