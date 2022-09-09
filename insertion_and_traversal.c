#include<stdio.h>
void main()
{
    int a[6], index, val, temp;
    printf("Enter 5 elements:");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("Enter index and value:");
    scanf("%d %d", &index, &val);
    for(int i = 5; i >= 0; i--)
    {
        a[i + 1] = a[i];
        if(i == index)
        {
            a[index] = val;
            break;
        }
    }
    for(int i = 0; i < 6; i++)
    {
        printf("%d ", a[i]);
    }
}
