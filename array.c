/*
#include <iostream>

main() {
    return 0;
}

*/
/*#include<stdio.h>
int main()
{
    int a[7],i;
    printf("\nEnter numbers: ");
    for(i=0;i<7;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<7;i++)
    {
        printf("\n%d- %d",a[i],&a[i]);
    }

    return 0;
}
*/
/*
//     entering 9 numbers and printing a 3x3 matrix//
#include<stdio.h>
int main()
{
    int i,j, a[3][3];
    //details
    printf("Enter numbers for your matrix: ");
    //reading
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          scanf("%d",&a[i][j]);
        }
    }
    //printing
    printf("\nYour customised matrix is ready!\nHere it is:  \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          printf("%d\t",a[i][j]);
        }
        printf("\n\n");
    }

    //printf("\n%d\t%d\t%d\n\n%d\t%d\t%d\n",a[0][0],a[0][1],a[1][0],a[1][1],a[2][0],a[2][1]);
     return 0;
}
*/

// printing a m x n matrix

#include <stdio.h>
int main()
{
  int i, j, r, c, a[10][10];
  //details
  printf("\nEnter no of rows: ");
  scanf("%d", &r);
  printf("\nEnter no of columns: ");
  scanf("%d", &c);
  printf("\nEnter %d numbers for your matrix: ", r * c);
  //reading
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  //printing
  printf("\nYour customised matrix is ready!\nHere it is:  \n");
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      printf("%d\t", a[i][j]);
    }
    printf("\n\n");
  }

  return 0;
}
