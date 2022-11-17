#include<stdio.h>
int main()
{
	int n, flag = 1;
	printf("Enter number of elements in set A:");
	scanf("%d", &n);
	int a[10][10];
	printf("Enter relation on Set A:\n");
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("Relation between %d and %d:", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	//Checking reflexive relation
	for(int i = 0; i < n; i++)
	{
		if(a[i][i] != 1)
		{
			flag = 0;
			break;
		}
	}
	printf("%d\n", flag);
	//Checking symmetric relation
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(a[i][j] == 1 && a[i][j] != 1)
			{
				flag = 0;
				break;
			}
		}
	}
	printf("%d\n", flag);
	//Checking transitive relation
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i != j && a[i][j] == 1)
			{
				for(int k = 0; k < n; k++)
				{
					if(j != k && a[j][k] == 1 && a[i][k] != 1)
						flag = 0;
				}
			}
		}
	}
	printf("%d\n", flag);
	if(flag)
		printf("Relation is Equivalence");
	else
		printf("Relation is not Equivalence");
	return 0;
}
