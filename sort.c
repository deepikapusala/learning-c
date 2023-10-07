#include<stdio.h>
int main()
{
    int a[50],n,i,j,k;
    printf("Enter how many numbers in to array: "); 
    scanf("%d",&n);

    printf("\nEnter %d numbers into the array: ", n); 
    for(i=0;i<n;i++)
    scanf("%d",&a[i]); 

    printf("\nArray elements are : \n");  
    for(i=0;i<n;i++)
    printf("a[%d] = %d\n",i,a[i]);

    // arranging elements in  ascending sorting order
    for(i=0;i<n;i++)  
    {
        for(j=i+1;j<n;j++) 
        {
            if(a[i] > a[j])  
            {
                k=a[i];     
                a[i]=a[j];
                a[j]=k;
            }
        }
    }

 printf("\nAscending order of the array is :  \n");
 for(i=0;i<n;i++)
 printf("%d ",a[i] );   
    
     // arranging numbers in  descending sorting order
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i] < a[j])
            {
                k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
        }
    }

 printf("\nDescending order of the array is :  \n");
 for(i=0;i<n;i++)
 printf("%d ",a[i] );   
   
    return 0;
}