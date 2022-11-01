#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n, m, top = 0;
    printf("Enter size of array U and A:");
    scanf("%d %d", &n, &m);
    int* u = (int*)malloc(n * sizeof(int));
    int* a = (int*)malloc(m * sizeof(int));
    int* c = (int*)malloc((n - m) * sizeof(int));
    printf("Enter %d elements in Array U:", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", (u + i));
    }
    printf("Enter %d elements in Array A:", m);
    for(int i = 0; i < m; i++)
    {
        scanf("%d", (a + i));
    }
    
	for(int i = 0; i < n; i++)
	{
		int j = 0;
		for(; j < m; j++)
		{
			if(*(u + i) == *(a + j))
				break;
		}
		if(j == m)
		{
			*(c + top) = *(u + i);
			top++;
		}
	}
	printf("Complement of A: ");
	for(int i = 0; i < top; i++)
	{
		printf("%d ", *(c + i));
	}
}
