#include<stdio.h>

int main()
{
  int a,b,c,d,h,r,num;
  float tri,squ,cir,rec;

  printf("enter values for b,h,a,r,c,d: ");
  scanf("%d %d %d %d %d %d", &b, &h, &a, &r, &c, &d);
  printf("enter num(1-4): ");
  scanf("%d", &num);
  tri = 0.5 * b * h;
  squ = a*a;
  cir = 3.14 * r * r;
  rec = c * d;

  switch (num)
  {
  case 1:
      printf("area of triangle is %f", tri);
      break;
  case 2:
      printf("area of square is %f", squ);
      break;
  case 3:
      printf("area of circle is %f", cir);
      break;
  case 4:
      printf("area of rectangle is %f", rec);
      break;
  default :
      printf("go & sleep!");
      break;
  }
      return 0;
  }