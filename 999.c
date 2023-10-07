#include<stdio.h>
#include<math.h>
int main()
{
int neg,count;
double num,sqroot;
printf("\nEnter 999 to stop");
neg=0;
for(count=0;count<=100;count++)
{
    printf("\nEnter a number: ");
    scanf("%lf",&num);
    if(num==999)
    break;
    if(num<0)
    {
        printf("\nNumber is negative. So it doesn't have any sqroots.");
        printf("\n----------------------");
        neg++;
        continue;
    }
    sqroot=sqrt(num);
    printf("Number = %lf\nSquare root: %lf",num,sqroot);
    printf("\n----------------------");
}
printf("\nNo of items done: %d",count);
printf("\nNegative items: %d",neg);
printf("\nEND OF DATA");
printf("\n----------------------");
return 0;
}