#include <stdio.h>
int main()
{
    int i, j, r1, c1, a[10][10], sum;
    //details
    printf("\nEnter no of rows for 1st matrix: ");
    scanf("%d", &r1);
    printf("\nEnter no of columns for 1st matrix: ");
    scanf("%d", &c1);
    printf("\nEnter %d numbers of 1st matrix: ", (r1 * c1));
//reading
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    //printing
    printf("\nMATRIX1:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n\n");
    }

    sum = 0;
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        { 
            if (i == j)              //condition for calculating sum of diagonal elements
            {
                sum = sum + a[i][j]; //logic for sum of diagonal elements
            }
        }
    }
    printf("\nSum = %d", sum);       //printing the result

    return 0;
}