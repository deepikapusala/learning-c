// Function with no args, no return value
/*
#include<stdio.h>
void biggestNum();                        //fun declaration

int main()
{
  biggestNum();                            //fun call
}

void biggestNum()                         //fun definition
{
  int a,b;
  printf("\nEnter a & b: ");
  scanf("%d %d",&a,&b);
  if(a > b)
  printf("%d is big.",a);
  else
  printf("%d is big.",b);
}
*/
//---------------------------------------------------------------------------------------------------------------------------------------
/*
//Fun with no args & with a return value
#include<stdio.h>
int biggestNum();

int main()
{
  int result;
  result = biggestNum();
  printf("\nBiggest num = %d",result);
}

int biggestNum()
{
  int a,b,big;
  printf("\nEnter a and b: ");
  scanf("%d %d",&a,&b);
  if(a>b)
  big = a;
  else
  big = b;
  return big;
}
*/
//-----------------------------------------------------------------------------------------------------------------------------------------
/*
//Function with args & with no return value
#include<stdio.h>

void biggestNum(int, int);

int main()
{
  int a,b;
  biggestNum(a,b);
}

void biggestNum(int a , int b)
{
  printf("\nEnter a & b: ");
  scanf("%d %d",&a,&b);
  if(a>b)
  printf("\n%d is big.",a);
  else
  printf("\n%d is big.",b);
}
*/
//----------------------------------------------------------------------------------------------------------------------------------------
/*
//Fun with args & with a return value
#include<stdio.h>
int biggestNum(int,int);

int main()
{
  int a, b , result;
  printf("\nEnter a&b: ");
  scanf("%d %d",&a,&b);
  result = biggestNum(a,b);
  printf("\nThe biggest num is = %d",result);
}

int biggestNum(int a, int b)
{
   int big;
   if(a<b)
   big = b;
   else
   big = a;
  return big;
}
*/
/*
//        fundamental operations
#include <stdio.h>

void add();
void sub();
void mul();
void div();

int main()
{

  add();
  sub();
  mul();
  div();

  return 0;
}

void add()
{
  int a, b;
  printf("\nEnter a and b: ");
  scanf("%d %d", &a, &b);
  printf("\n%d + %d = %d", a, b, (a + b));
}
void sub()
{
  int a, b;
  printf("\nEnter a and b: ");
  scanf("%d %d", &a, &b);
  printf("\n%d - %d = %d", a, b, (a - b));
}
void mul()
{
  int a, b;
  printf("\nEnter a and b: ");
  scanf("%d %d", &a, &b);
  printf("\n%d x %d = %d", a, b, (a * b));
}
void div()
{
  int a, b;
  printf("\nEnter a and b: ");
  scanf("%d %d", &a, &b);
  printf("\n%d / %d = %d", a, b, (a / b));
}
*/
#include<stdio.h>
int sum(int a, int b);               //fun declaration

int main()
{
  int a, b;
  printf("\nEnter a: ");
  scanf("%d",&a);
  printf("\nEnter b: ");
  scanf("%d",&b);

int s = sum(a,b);                    //fun call
printf("\nSum is : %d ",s);
  
}

int sum(int a , int b)               //fun definition
{
  return a+b;
}