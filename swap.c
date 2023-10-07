#include<stdio.h>
void swap(int a, int b);
void _swap(int *a, int *b);

int main()
{ 
  int x = 3, y = 5;
  swap(x, y);
  printf("\ncall by value"); 
  printf("\n x = %d and y = %d",x,y);
  _swap(&x,&y);
  printf("\ncall by reference");
  printf("\n x = %d and y = %d",x,y);

    return 0;
}
// swap function
void swap(int a, int b)
{
 int t; //a,b,t
  t = a ;
  a = b; 
  b = t;
  printf("\na = %d and b = %d",a,b);
}
void _swap(int *a, int *b)
{
 int t; //a,b,t
  t = *a ;
  *a = *b; 
  *b = t;
}


