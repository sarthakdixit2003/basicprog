#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n, val, loc = -1, beg = 0, end, mid;
    printf("Enter no of elements in array:");
    scanf("%d", &n);
    end = n - 1;
    mid = (beg + end)/2;
    //printf("%d", n);
    int* a = (int*)malloc(n * sizeof(int));
    printf("Enter %d elements in Array in sorted array:", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d",(a + i));
    } 
    printf("Enter element to search in array:");
    scanf("%d", &val);
    while(beg < end)
    {
        //printf("%d ",mid);
        if(*(a + mid) == val)
        {
            loc = mid;
            printf("%d found at %d", val, mid);
            break;
        }
        else if(*(a + mid) < val)
            beg = mid + 1;
        else
            end = mid - 1;
        mid = (beg+end)/2;
    }
    if(loc == -1)
        printf("%d not found in array", val);        
}
