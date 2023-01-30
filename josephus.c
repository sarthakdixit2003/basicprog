#include<stdio.h>

int josepheus(int n, int k)
{
    int res = 0;
    for(int i = 1; i <= n; i++)
        res = (res + k) % i;
    return res+1;
}
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    printf("The chosen place is %d: ", josepheus(n, k));
}
