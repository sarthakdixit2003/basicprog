#include<stdio.h>
#include<stdlib.h>
int lhs[50], rhs[50], rhslen, setAcomp[50], setAcompLen, setBcompLen, setBcomp[50], temp[100], unionlen;
void unionfun(int* a, int* b, int n, int m)
{
    for(int i = 0; i < n; i++)
        temp[i] = a[i];
    int top = n-1;
    for(int i = 0; i < n; i++)
    {
        int j = 0;
        for(; j < m; j++)
        {
            if(b[i] == temp[j])
                break;
        }
        if(j == m)
        {
            top++;
            temp[top] = b[i];
        }
    }
    unionlen = top;
    // for(int i = 0; i <= top; i++)
    //     printf("%d ", temp[i]);
    // printf("\n");
}

void complement(int* uni, int *a, int u, int n, int* set, int setlen)
{
    int top = 0;
    for(int i = 0; i < u; i++)
    {
        int j = 0;
        for(; j < n; j++)
        {
            if(uni[i] == a[j])
            {
                //printf("%d %d\n", uni[i], a[j]);
                break;
            }
        }
        if(j == n)
        {
            
            set[top] = uni[i];
            top++;
        }
    }
    setlen = top;
    // for(int i = 0; i < top; i++)
    //     printf("%d ", set[i]);
    // printf("\n");
}

void intersection(int* a, int* b, int n, int m)
{
    int top = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(a[i] == b[j])
            {
                rhs[top] = a[i];
                top++;
            }
        }
    }
    rhslen = top;
}
void main()
{
    int u, n, m;
    int universal[100], setA[50], setB[50];
    printf("Enter number of elements in Universal Set, Set A and Set B:");
    scanf("%d %d %d", &u, &n, &m);
    //printf("1. (A U B)' = A' ∩ B'");
    printf("Enter %d elements in Universal Set:", u);
    for(int i = 0; i<u; i++)
        scanf("%d", &universal[i]);
    printf("Enter %d elements in Set A:", n);
    for(int i = 0; i<n; i++)
        scanf("%d", &setA[i]);
    printf("Enter %d elements in Set B:", m);
    for(int i = 0; i<m; i++)
        scanf("%d", &setB[i]);  
    unionfun(setA, setB, n, m);
    complement(universal, setA, u, n, setAcomp, setAcompLen);
    complement(universal, setB, u, m, setBcomp, setBcompLen);
    complement(universal, temp, u, unionlen, lhs, unionlen);
    intersection(setAcomp, setBcomp, setAcompLen, setBcompLen);
    printf("LHS = ");
    for(int i = 0; i < unionlen; i++)
        printf("%d ", lhs[i]);
    printf("\nRHS = ");
    for(int i = 0; i < rhslen; i++)
        printf("%d ", rhs[i]);
    printf("\n");
    //intersection
}
