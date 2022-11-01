#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n, sum1 = 0, fact = 1;
	printf("Enter any number:");
	scanf("%d", &n);

	for(int i = 1; i <= n; i++)
	{	fact = 1;
		for(int j = 1; j <= i; j++)
		{
			fact *= j;
		}
		sum1 += fact/i;
	}
	printf("Sum of n factorials: %d", sum1);
}
