#include<stdio.h>
#include<string.h>
#include<math.h>
//triangle(multiplication), square(mul the same number), circle(mul the same), rectangle(mul 2 nums)
int mul(int b, int h);  //parameters
int  sq(int s);



int main()
{
    int b, h;
    printf("\nArea of a triangle-->");
    printf("\n Base = ");
    scanf("%d",&b);
    printf("Height = ");
    scanf("%d",&h);

    float m = mul(b,h);
    printf("Area of the triangle is %f",0.5*m);
    printf("\n------------------------------------ -----");

    int n;
    printf("\nArea of a square-->");
    printf("\nEnter side = ");                 //arguments
    scanf("%d",&n);
    int p = sq(n);
    printf("Area of the square is %d",p);
     printf("\n-----------------------------------------");

    int r;
    printf("\nEnter radius = ");
    scanf("%d",&r);
    float z = sq(r);
    printf("Area of the circle is %f",3.14*z);
     printf("\n-----------------------------------------");

    int c,d;
    printf("\nArea of the rectangle-->");
    printf("\nEnter c = ");
    scanf("%d", &c);
    printf("Enter d = ");
    scanf("%d", &d);
    int e = mul(c,d);
    printf("Area of the rectangle is %d",e);
     printf("\n-----------------------------------------");
 
     int n = 5;
     printf("%f",pow(n))
    return 0;
}

int mul(int b, int h)          //parameters
{
   return b*h;
}

int sq(int r)
{
    return r*r;
}



