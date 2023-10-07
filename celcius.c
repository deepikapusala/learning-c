//converting celcius to farenheit
#include<stdio.h>
int main()
{
    float cel, far;

    printf("\nEnter temparature in celcius scale: ");
    scanf("%f",&cel);

    far = cel*(9.0/5.0) + 32;      //logic for temparature change , while using float must write 9.0 but not 9.

    printf("\nThe temparature of %f in farenheit scale is %f",cel,far);
    return 0;
}
/*
// write the above same code using functions
//ans:
#include <stdio.h>

float convertTemp(float celcius);

int main()
{
    float far = convertTemp(37);
    printf("\nfarenheit = %f", far);

    return 0;
}

float convertTemp(float celcius)
{
    float far = celcius * (9.0 / 5.0) + 32;
    return far;
}
*/