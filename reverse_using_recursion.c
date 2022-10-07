#include<stdio.h>
int new = 0;
void rev(int n)
{
	if(n == 0)
		return;
	new = (new * 10) + (n % 10);
	rev(n/10);
}
void main()
{
	int n;
	printf("Enter number:");
	scanf("%d", &n);
	rev(n);
	printf("Reverse of Number is %d", new);
}
