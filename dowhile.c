#include<stdio.h>

int main()
{
    int i = 1,sum = 0;

    do
    {
        printf("\n%d",i);
        sum+=i;
        i++;
    } while (i<=5);  //i<=(5) so it will print sum of numbers upto 5 if u want u can change number here

    printf("\n The sum of above numbers is = %d",sum);
    
    return 0;
}