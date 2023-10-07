#include <stdio.h>
int main()
{
    int i, j, k, r1, r2, c1, c2, a[10][10], b[10][10], c[10][10];
    printf("\nEnter no of rows for 1st matrix: ");
    scanf("%d", &r1);
    printf("\nEnter no of columns for 1st matrix: ");
    scanf("%d", &c1);
    printf("\nEnter %d numbers of 1st matrix: ", (r1 * c1));

    // reading elements into matrix1
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nMATRIX1:       %dx%d\n", r1, c1);
    // printing matrix1
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n\n");
    }

    printf("\nEnter no of rows for 2nd matrix: ");
    scanf("%d", &r2);
    printf("\nEnter no of columns for 2nd matrix: ");
    scanf("%d", &c2);
    printf("\nEnter %d numbers of 2nd matrix: ", (r2 * c2));
    // reading numbers into 1st matrix
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    // printing matrix2
    printf("\nMATRIX2:     %dx%d\n", r2, c2);
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n\n");
    }
    if (c1 == r2)
    {
        printf("\nProduct of MATRIX1 & MATRIX2 is:           %dx%d\n", r1, c2);
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < c1; k++)
                {
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
                }
            }
        }
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d\t", c[i][j]);
            }
            printf("\n\n");
        }
    } 
    else
    {
        printf("\nMultiplication is not possible for these matrices bcoz c1!=r2.");
    }
    return 0;
}