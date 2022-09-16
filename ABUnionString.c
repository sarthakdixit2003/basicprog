#include<stdio.h>

void main()
{
    int n, m;
    char a[10], b[10], c[20];
    printf("Enter size of array A and B:");
    scanf("%d %d", &n, &m);
    
    printf("Enter string A:");
    scanf("%s", a);
    printf("Enter string B:");
    scanf("%s", b);
    //Inserting elements of array A in array C
    int top = n;
    for(int i = 0; i < n; i++)
    {
        c[i] = a[i];
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
    printf("\nString A:%s",a);
    printf("\nString B:%s",b);
    printf("\nString C:%s",c);
}
