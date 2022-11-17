#include<stdio.h>
int main()
{
	int n, m;
	printf("Enter number of elements in set A and B:");
	scanf("%d %d", &n, &m);
	int a[20], b[20];
	printf("Enter elements in Set A:");
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("Enter elements in Set B:");
	for(int i = 0; i < m; i++)
		scanf("%d", &b[i]);
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("(%d, %d) ", a[i], b[j]);
		}
	}
	return 0;
}
