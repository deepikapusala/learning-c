#include<stdio.h>
int main()
{ 
  int a[10][10], i, j ,r ,c;
  long det;
  //details
  printf("\nEnter rows: ");
  scanf("%d",&r);
  printf("\nEnter columns: ");
  scanf("%d",&c);
  printf("Enter the %d elements of matrix: ",r*c);
  //reading
  for (i = 0; i < r; i++)
  {
      for (j = 0; j < c; j++)
      {
          scanf("%d", &a[i][j]);
      }
  }
  //printing matrix
  printf("\nThe matrix is\n");

  for(i = 0;i < r; i++)
  {
      for(j = 0;j < c; j++)
      {
           printf("%d\t", a[i][j]);
      }
      printf("\n\n");
  }
 //logic for determinant
  det = a[0][0] * ((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1] * (a[1][0]
   * a[2][2] - a[2][0] * a[1][2]) + a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);
 if(r*c == 9) //condition for finding determinant
 {
  printf("\nDeterminant of entered matrix is : %ld", det); //printing the value of determinant
 }
 else
 {
    printf("\nDeterminant is not possible.");
 }
   return 0;
}