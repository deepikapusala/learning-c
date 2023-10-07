#include <stdio.h>
int main()
{
    int age;
    printf("\nwhat's ur age?: ");
    scanf("%d", &age);
    if(age>=0 && age<=3)
    {
        printf("\nhey! hi toddler. you should always be with ur mom and listen to her");
    }
    else if(age>3 && age<12)
    {
        printf("\nyou are a child so u've to learn some activities at this age:)");
    }
    else if(age>=12 && age<18)
    {
        printf("\nhi teenager!You have to be careful in this age and your brain works like hussain bolt!!");
    }
    else if (age>=18 && age<=40)
    {
        printf("\nyou are an ADULT\nso,u can drive and vote and marry!!");
    }
    else if (age>40 && age<70)
    {
        printf("\nyou are into aunties and uncles age :D");
    }
    else if(age>=70 && age<=100)
    {
        printf("\nnamaste, you better have a support");
    }
    else if(age>100)
    {
        printf("\nomg!! you have successfully completed 100 years! you are great. enjoy ahead. ");
    }
    return 0;
} 