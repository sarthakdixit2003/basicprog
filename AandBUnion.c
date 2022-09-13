#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n, m;
    printf("Enter size of array A and B:");
    scanf("%d %d", &n, &m);
    int* a = (int*)malloc(n * sizeof(int));
    int* b = (int*)malloc(m * sizeof(int));
    int* c = (int*)malloc((n + m) * sizeof(int));
    printf("Enter %d elements is Array A:", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", (a + i));
    }
    printf("Enter %d elements is Array B:", m);
    for(int i = 0; i < m; i++)
    {
        scanf("%d", (b + i));
    }
    //Inserting elements of array A in array C
    int top = n;
    for(int i = 0; i < n; i++)
    {
        *(c + i) = *(a + i);
    }
    //Inserting unique elements of array of B in array C
    for(int i = 0; i < m; i++)
    {
        int j = 0;
        for(; j < top; j++)
        {
            if(*(b + i) == *(c + j))
            {
                break;
            }
        }
        if(j == top)
        {
            *(c + top) = *(b + i);
            top++;
        }
    }
    printf("Array A:");
    for(int i = 0; i < n; i++)
        printf("%d ",*(a + i));
    printf("\nArray B:");
    for(int i = 0; i < m; i++)
        printf("%d ",*(b + i));
    printf("\nArray C:");
    for(int i = 0; i < top; i++)
        printf("%d ",*(c + i));
}
