#include <stdio.h>
int main()
{
    int i, j, n, sum = 0;
    printf("enter a number:  ");
    scanf("%d", &n);
    
    for ( i=1, j=n; i<=n && j>=1 ; i++, j--)
    {
        sum = sum + i;
        printf("%d\n", j);
    }

    printf("sum is %d\n", sum);
    return 0;
}



