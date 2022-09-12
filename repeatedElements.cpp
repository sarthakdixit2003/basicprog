#include<stdio.h>
void main()
{
    int a[5];
    printf("Enter 5 elements");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < 5; i++)
        printf("%d ", a[i]);
    printf("\n");
    for(int i = 0; i < 5; i++)
    {
        int j;
        int temp = a[i];
        for(j = i + 1; j < 5; j++)
        {
            if(temp == a[j])
            {
                printf("%d is repeated\n", a[j]);
                break;
            }
        }
        
    }
}
