#include <stdio.h>
void main()
{
    /*without using third variable*/
    int a1,b1,a2,b2,c2;
    printf("Enter a and b:");
    scanf("%d %d",&a1,&b1);
    a1=a1+b1;
    b1=a1-b1;
    a1=a1-b1;
    printf("Swapped values without using third variable a=%d\nb=%d",a1,b1);
    /*with using third variable*/
    printf("\nEnter a and b:");
    scanf("%d %d",&a2,&b2);
    c2=a2;
    a2=b2;
    b2=c2;
    printf("\nSwapped values with using third variable a=%d\nb=%d",a2,b2);
}
