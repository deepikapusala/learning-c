//adding two complex numbers
/*
#include <stdio.h>
struct complex
{
    double real;
    double img;
};
struct complex add(struct complex c1, struct complex c2)
{
    struct complex c3;
    c3.real = c1.real + c2.real;
    c3.img = c1.img + c2.img;
    return c3;
}
int main()  
{
    struct complex num1, num2, result;

    // Input for the first complex number
    printf("Enter real and imaginary parts of the first complex number: ");
    scanf("%lf %lf", &num1.real, &num1.img);

    // Input for the second complex number
    printf("Enter real and imaginary parts of the second complex number: ");
    scanf("%lf %lf", &num2.real, &num2.img);

    result = add(num1, num2);

    printf("Sum of the two complex numbers: %.2lf + %.2lfi\n", result.real, result.img);

    return 0;
}
*/

//printing a complex number using arrow operator
#include<stdio.h>
struct complex
{
    int real;
    int img;
}; 

int main()
{
   struct complex num1 ={5, 2};
   struct complex *ptr = &num1;

   printf("\nreal part = %d",ptr->real);   //ptr's name->member1
   printf("\nimg part = %d",ptr->img);     //ptr's name->member2
    return 0;
}