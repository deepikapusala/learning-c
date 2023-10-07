#include<stdio.h>
int main()
{
    int i,j,r1,r2,c1,c2,a[10][10],b[10][10],c[10][10];
    //details for 1st matrix
    printf("\nEnter no of rows for 1st matrix: ");
    scanf("%d",&r1);
    printf("\nEnter no of columns for 1st matrix: ");
    scanf("%d",&c1);
    printf("\nEnter %d numbers of 1st matrix: ",(r1*c1));
//reading 1st matrix
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
//printing matrix 1
printf("\nMATRIX1:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n\n");
    }
//details for 2nd matrix
    printf("\nEnter no of rows for 2nd matrix: ");
    scanf("%d",&r2);
    printf("\nEnter no of columns for 2nd matrix: ");
    scanf("%d",&c2);
    printf("\nEnter %d numbers of 2nd matrix: ",(r2*c2));
    //reading 2nd matrix
for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    //printing 2nd matrix
    printf("\nMATRIX2: \n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n\n");
    }

    if(r1==r2&&c1==c2)         //condition for addition of matrices
    {
        printf("\nAddition of MATRIX1 & MATRIX2 is: \n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            { 
                c[i][j] = a[i][j] + b[i][j];  //logic for addition of matrices
            }
        }
//printing the resultant matrix
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n\n");
        }
        
    }
    else
    {
         printf("\nAddition is not possible for this matrix bcoz orders of 2 matrices are different.!");
    }
    return 0;
}