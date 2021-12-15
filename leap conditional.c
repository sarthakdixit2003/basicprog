#include <stdio.h>
void main()
{
    int year;
    printf("Enter year:");
    scanf("%d",&year);
    (year%4==0?printf("Leap"):printf("Not Leap"));
}
