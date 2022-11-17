#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
	int n, size;
	printf("Enter number of elements in set A");
	scanf("%d", &n);
	char a[20];
	scanf("%s", a);
	size = pow(2, n);
	printf("phi");
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i & (1<<j))
			{
				printf("%c", a[j]);
			}
		}
		printf("\n");
	}
	return 0;
}
