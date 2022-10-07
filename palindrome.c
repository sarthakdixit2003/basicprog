#include<stdio.h>
void main()
{
	int n, new=0, temp;
	printf("Enter number:");
	scanf("%d", &n);
	temp = n;
	while(temp != 0)
	{
		new = new * 10 + (temp % 10);
		temp/=10;
	}
	if(new == n)
		printf("Palindrome");
	else
		printf("Not Palindrome");
}
