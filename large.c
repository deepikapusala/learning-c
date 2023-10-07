#include<stdio.h>
int main()
{
    int i,n,a[50],large;
    //how many numbers?
    printf("\nEnter no of numbers: ");
    scanf("%d",&n);
    printf("\nEnter %d numbers: ",n ); 
    //reading those numbers into an array  called a[50]
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }

    large = a[0];    
     for(i=1;i<n;i++)
     {
        if(a[i]>large)
        {
            printf("\n%d is the largest number among %d numbers.",a[i],n);
        }
     }
     return 0;
}