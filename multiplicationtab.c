#include<stdio.h>
#define COLMAX 10
#define ROWMAX 12
int main()
{
    int row,column,y;
    printf("\n   MULTIPLICATION TABLE     ");
    printf("\n----------------------------\n");
    row=1;
    do
    {
        column=1;
        do
        {
        y=row*column;
        printf("%4d",y);
        column=column++;
        }
        while(column<=COLMAX);
        printf("\n");
        row=row+1; 
    }
   while(row<=ROWMAX);
   printf("\n--------------------\n");
   return 0;
}