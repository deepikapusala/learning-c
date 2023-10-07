/*
                    //sum of n natural numbers
#include<stdio.h>
int sum(int n);
int main()
{
   printf("\nsum is = %d",sum(6));
    return 0;
}
int sum(int n)
{
    if (n == 1)
        return 1;
    else
    {
        int sumNm1 = sum(n - 1);
        int sumN = sumNm1 + n;
        return sumN;
    }
}
*/
/*
// sum of n even numbers
#include<stdio.h>
int sum(int n);
int main()
{
   printf("\nsum is = %d",sum(10));
    return 0;
}
int sum(int n)
{
    if (n == 2)
        return 2;
    else
    {
        int sumNm1 = sum(n - 2);
        int sumN = sumNm1 + n;
        return sumN;
    }
}
*/