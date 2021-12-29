#include <stdio.h>
#include <math.h>
void main()
{
    int n,i=10,j=100,temp1,temp2,temp,rev=0,arm=0;

    printf("Enter any three digit no.:");
    scanf("%d",&n);
    temp1=n;
    temp2=n;
    while(temp1>0)
    {
        temp=temp1%i;
        rev+=temp*j;
        j/=10;
        temp1/=10;
        /*printf("%d ",temp);*/
        temp=0;
    }
    /*printf("Reverse=%d\n",rev);*/
    if(rev==n)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    while(temp2!=0)
    {
        temp=temp2%10;
        arm+=pow(temp,3);
        temp=0;
        temp2/=10;
    }
    /*printf("%d\n",arm);*/
    if(arm==n)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }
}
