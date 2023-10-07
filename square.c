#include<stdio.h>
void square(int n);            //here we just make changes in function defintion but not un main func
void _square(int *n);          // we directly changed in it's address

int main()
{
  int number = 4;
  square(number);
 printf("\n number = %d", number);
  _square(&number);
 printf("\n number = %d", number);
    return 0;
}

void square(int n)                // call by value
{
    n = n*n;
    printf("\nsquare= %d",n);
}

void _square(int *n)              // call by reference
{
 *n = (*n)*(*n);
 printf("\nsquare = %d",(*n));
}
