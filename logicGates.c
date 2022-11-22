#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int n;
int arr[25][5];

void intToBin()
{
	//printf("herre");
	for(int i = 1; i < pow(2,n); i++)
	{
		int temp = i;
		int j = n-1;
		while(temp > 0)
		{
			arr[i][j] = temp%2;
			temp /= 2;
			j--;
		}
	}
	
}
void solve(int choice)
{
	int ans = 1;
	if(choice == 1)
	{
		printf("\n0\t1");
		printf("\n1\t0");
	}
	else if(choice == 2)
	{
		for(int i = 0; i < pow(2, n); i++)
		{
			ans = 1;
			for(int j = 0; j < n; j++)
			{
				ans = ans && arr[i][j];
				printf("%d ", arr[i][j]);
			}
			printf("\t%d", ans);
			printf("\n");
		}
	}
	else if(choice == 3)
	{
		for(int i = 0; i < pow(2, n); i++)
		{
			ans = 0;
			for(int j = 0; j < n; j++)
			{
				ans = ans || arr[i][j];
				printf("%d ", arr[i][j]);
			}
			printf("\t%d", ans);
			printf("\n");
		}
	}
	else if(choice == 4)
	{
		for(int i = 0; i < pow(2, n); i++)
		{
			ans = 1;
			for(int j = 0; j < n; j++)
			{
				ans = (ans && arr[i][j]);
				printf("%d ", arr[i][j]);
			}
			ans = !ans;
			printf("\t%d", ans);
			printf("\n");
		}
	}
	else if(choice == 5)
	{
		for(int i = 0; i < pow(2, n); i++)
		{
			ans = 0;
			for(int j = 0; j < n; j++)
			{
				ans = (ans || arr[i][j]);
				printf("%d ", arr[i][j]);
			}
			ans = !ans;
			printf("\t%d", ans);
			printf("\n");
		}
	}
	else if(choice == 6)
	{
		for(int i = 0; i < pow(2, n); i++)
		{
			ans = arr[i][0];
			for(int j = 0; j < n; j++)
			{
				ans = ans ^ arr[i][j];
				printf("%d ", arr[i][j]);
			}
			printf("\t%d", ans);
			printf("\n");
		}
	}
	else if(choice == 7)
	{
		for(int i = 0; i < pow(2, n); i++)
		{
			ans = arr[i][0];
			for(int j = 0; j < n; j++)
			{
				ans = ans ^ arr[i][j];
				printf("%d ", arr[i][j]);
			}
			ans = !ans;
			printf("\t%d", ans);
			printf("\n");
		}
	}
}
int main()
{
	int choice;
	printf("Enter no of variables:");
	scanf("%d", &n);
	intToBin();
	printf("Enter logic gate:");
	printf("\n1. NOT");
	printf("\n2. AND");
	printf("\n3. OR");
	printf("\n4. NAND");
	printf("\n5. NOR");
	printf("\n6. XOR");
	printf("\n7. XNOR");
	printf("\nEnter your choice: ");
	scanf("%d", &choice);
	
	solve(choice);
}
