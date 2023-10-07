#include <stdio.h>
int main()
{
    int sum, num, rem, sum1;
    printf("\nEnter num: ");
    scanf("%d", &num);

    sum = 0;
    sum1 = 0;
    while (num > 0)
    {
        rem = num % 10;        //get the last digit of the nuumber
        sum1 = sum1 + rem;     //add the last digit to sum1(for sum of digits)
        sum = sum * 10 + rem;  //add the last digit to sum(for reversing)
        num = num / 10;        //remove the last digit from the number
    }
    printf("Reverse number: %d  ", sum);
    printf(" \nsum of digits in %d is %d",sum ,sum1);
    // printf("\nYou found it!");
    return 0;
}