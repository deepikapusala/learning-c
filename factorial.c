
//          factorial of a number
#include<stdio.h>
int fact(int n);
int main()
{
   printf("\n%d",fact(7));
    return 0;
}
int fact(int n)
{
    int factN, factNm1;
    if(n == 1)          //base case
        return 1;
    else
        factNm1 = fact(n-1);
        factN = factNm1 *n;
    return factN;
}
