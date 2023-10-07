#include<stdio.h>
int main()
{
    int i,j,r,c,a[10][10],count;
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
    count=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]==0)
            count++;
        }
    }
    if(count>(r*c)/2)
    {
        printf("\nThis is a sparse matrix.");
    }
    else
    {
        printf("\nThis is not a sparse matrix.");
    }
return 0;
}