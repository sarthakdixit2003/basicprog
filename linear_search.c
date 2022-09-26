#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n, val, loc = -1;
    printf("Enter no of elements in array:");
    scanf("%d", &n);
    //printf("%d", n);
    int* a = (int*)malloc(n * sizeof(int));
    printf("Enter %d elements in Array", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d",(a + i));
    } 
    printf("Enter element to search in array:");
    scanf("%d", &val);
    for(int i = 0; i < n; i++)
    {
        if(*(a + i) == val)
        {
            loc = i;
            printf("%d found in array at %d\n", val, loc);
        }
    }
    if(loc == -1)
        printf("%d not found in array", val);        
}
