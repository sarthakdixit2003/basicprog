#include <stdio.h>
void main()
{
    float bs,da,hra,pf;
    printf("Enter basic income:");
    scanf("%f",&bs);
    da=0.25*bs;
    hra=015*bs;
    pf=0.1*bs;
    printf("DA=%f\nHRA=%f\npf=%f\nGross Salary=%f",da,hra,pf,bs+da+hra);
}
