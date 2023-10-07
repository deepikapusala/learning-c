#include<stdio.h>
#define FIRST 360
#define SECOND 240
int main()
{
    int n,m, marks, total , rollNumber,i,j;

    printf("\nEnter num of students and subjects: ");
    scanf("%d %d",&n,&m);
    printf("\n");
    for(i=1;i<=n;i++)
    {
        printf("\nEnter roll number: ");
        scanf("%d",&rollNumber);
        total=0;
        printf("\n Enter marks of %d subjects for roll num %d: ",m,rollNumber);
        for(j=1;j<=m;j++)
        {
            scanf("%d",&marks);// instead of writing 6& symbols if we wrote 6 subjects //this for loop for 'm'subject marks.
            total=total+marks;
        }
        printf("\nTOTAL MARKS  = %d\n",total);
        if(total>=FIRST)
        printf("(First Class)\n\n"); 
        else if(total>=SECOND)
        printf("(SECOND CLASS)\n\n");
        else
        printf("(***FAIL***)\n\n");
        
    
    } 
    return 0;
}