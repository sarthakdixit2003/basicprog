#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n, m, top = 0;
    printf("Enter size of array A and B:");
    scanf("%d %d", &n, &m);
    int* a = (int*)malloc(n * sizeof(int));
    int* b = (int*)malloc(m * sizeof(int));
    int* c = (int*)malloc(n * sizeof(int));
    printf("Enter %d elements in Array A:", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", (a + i));
    }
    printf("Enter %d elements in Array B:", m);
    for(int i = 0; i < m; i++)
    {
        scanf("%d", (b + i));
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(*(a + i) == *(b + j))
            {
                *(c + top) = *(a + i);
                top++;
            }
        }
    }
    
    for(int i = 0; i < top; i++)
        printf("%d ", *(c + i));
}
