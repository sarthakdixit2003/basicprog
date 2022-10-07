#include<stdio.h>
int fact(int n)
{
	if(n == 1)
		return 1;
	if(n == 2)
		return 2;
	return n * fact(n-1);
}
void main()
{
	int n;
	printf("Enter number:");
	scanf("%d", &n);
	printf("%d", fact(n));
}
