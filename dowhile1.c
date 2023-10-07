#include<stdio.h>
int main()
{
    int i = 1,sum = 0;

    do
    {
        sum=sum+i;           //sum of odd numbers
        i=i+2;             
    }
    while(sum<=40||i<10);
    printf("\n%d %d",i,sum);
    return 0;
}
   