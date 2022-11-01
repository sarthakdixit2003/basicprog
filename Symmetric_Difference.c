#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n, m, topA = 0, topB = 0, temp;
    printf("Enter size of array A and B:");
    scanf("%d %d", &n, &m);
    int* a = (int*)malloc(n * sizeof(int));
    int* b = (int*)malloc(m * sizeof(int));
    int* c = (int*)malloc(n * sizeof(int));
	
    printf("Enter %d elements is Array A:", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &temp);
		*(a + i) = temp;
		*(c + i) = temp;
    }
    printf("Enter %d elements is Array B:", m);
    for(int i = 0; i < m; i++)
    {
        scanf("%d", &temp);
		*(b + i) = temp;
    }
	//A-B
    topA = n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(*(a + i) == *(b + j))
            {
                for(int k = i; k < topA; k++)
                {
                    *(a + k) = *(a + k + 1);
                }
                topA--;
            }
        }
    }
	
	//B-A
	topB = m;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(*(b + i) == *(c + j))
            {
                for(int k = i; k < topB; k++)
                {
                    *(b + k) = *(b + k + 1);
                }
                topB--;
            }
        }
    }
	

	int* d = (int*)malloc((topA + topB) * sizeof(int));
	//Inserting elements of array A in array D
    int top = topA;
    for(int i = 0; i < topA; i++)
    {
        *(d + i) = *(a + i);
    }
    //Inserting unique elements of array of B in array D
    for(int i = 0; i < topB; i++)
    {
        int j = 0;
        for(; j < top; j++)
        {
            if(*(b + i) == *(d + j))
            {
                break;
            }
        }
        if(j == top)
        {
            *(d + top) = *(b + i);
            top++;
        }
    }
	printf("Symmetric Difference of A and B: ");
	for(int i = 0; i < top; i++)
	{
		printf("%d ", *(d + i));
	}
}
