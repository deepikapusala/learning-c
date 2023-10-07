#include<stdio.h>
#include<math.h>

int main()
{
    double A = sqrt(9);
    int B = pow(2,4);
    int C = round(3.14);
    int D = ceil(3.14);// ceil up .after
    int E = floor(3.99);// floor down .before
    double F = fabs(-100);// positive value
    double G = log(3); 
    double H = sin(45);
    double i = cos(45);
    double J = tan(45);

    printf("\n%lf \t%d \t%d",A,B,C);
    printf("\n%d \t%d \t%lf",D,E,F);
    printf("\n%lf \t%lf \t%lf",G,H,i);
    printf("\n%lf",J);
    return 0;
}