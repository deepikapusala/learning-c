#include<stdio.h>
int main()
{
    int i,j,r,c,a[10][10],b[10][10];
    printf("\nEnter no of rows: ");
    scanf("%d",&r);
    printf("\nEnter no of columns: ");
    scanf("%d",&c);
    printf("\nEnter %d numbers: ",r*c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nYour matrix is ready!\nHere it is: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n\n");
    }
        
    printf("\nTranspose matrix of above is :\n");

    for(j=0;j<c;j++)
    {
        for(i=0;i<r;i++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}