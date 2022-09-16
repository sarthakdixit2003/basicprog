#include<stdio.h>
int map[5][2], top = 0;
int checkRepeat(int val)
{
    for(int i = 0; i < top; i++)
    {
        //printf("ok");
        if(val == map[i][0])
            return 0;
    }
    return 1;
}
void main()
{
    int a[5];
    printf("Enter 5 elements:");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < 5; i++)
    {
        //if a[i] already in map
        int check = checkRepeat(a[i]);
        //printf("%d", check);
        if(check == 1)
        {
            int count = 1;
            for(int j = i + 1; j < 5; j++)
            {
                if(a[j] == a[i])
                    count++;
            }
            //insert in map with number of counts
            
            map[top][0] = a[i];
            map[top][1] = count;
            top++;
        }
    }
    //printing map
    for(int i = 0; i <= top; i++)
    {
        if(map[i][1] > 1)
            printf("%d is repeated %d times\n", map[i][0], map[i][1]);
    }
}
