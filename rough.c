#include<stdio.h>
int main()
{
    int i, n = 5, arr[5] = {1,2,3,4,5};
    for (i = -1; ++i < n;)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
    i = -1;
    while (++i < n)
    {
        printf("%d", arr[i]);
    }

    return 0;
}

/*
//                       iso646.h header file
#include<stdio.h>
#include<iso646.h>
int main()
{
    int x = 15;
    if(x<20 and x>10 or x<0)
    {
        printf("\nThe result is true.");
    }
    return 0;
}
*/
/*    
#include<stdio.h>
int main()
{
    char c = 'a';
    int x = c++;
    printf("%c %d",c ,x);
    return 0;
}
*/


/*          doubt 2
    int y = ++c;
    printf("\n%c %d", c, y);
#include <stdio.h>
int main()
{
    char name1[50];
    char name2[50];

    printf("\nEnter name: ");
    scanf("%[^\n]s", name1);
    printf("\nhi %s", name1);
    printf("\n");
    puts("Enter name: ");
    printf("\n");
    //gets(name2);
    fgets(name2, sizeof(name2), stdin);
    puts(name2);
    // printf("\n end of the program");

    return 0;
}
*/

/*                      ******** // doubt1 //*********
#include <stdio.h>
int main()
{
   int a;
   float b;
   char c;

   printf("Enter values of a, b and c\n");
   if(scanf("%d %f %c",&a ,&b ,&c) == 3)
   {
    printf("a = %d b = %f c = %c\n", a, b, c);
   }
   else
   {
     printf("Error in input.\n");
   }

    return 0;
}*/
/*       //formatted input
#include<stdio.h>
int main()
{
    float y = 98.7654;

    printf("1. %7.4f\n", y);
    printf("2. %f\n", y);
    printf("3. %7.2f\n", y);
    printf("4. %-7.2f\n", y);
    printf("5. %07.2f\n", y);
    printf("6. %*.*f\n",7,2,y);
    printf("7. \n");
    printf("8. %10.2e\n", y);
    printf("9. %12.4e\n",-y);
    printf("10. %-10.2e\n",y);
    printf("11. %e\n",y);

    return 0;
}*/
/* // logarithm
#include <stdio.h>
#include <math.h>

int main() {
    double num1 = 10.0;
    double natural_log = log(num1);

    printf("Natural logarithm of %.2f is %.2f\n", num1, natural_log);

 double num2 = 100.0;
    double common_log = log10(num2);

    printf("Base 10 logarithm of %.2f is %.2f\n", num2, common_log);
    return 0;
}
*/

// sin,cos , tan ---------------------------------------------------------------------------------------
/*
#include <stdio.h>
#include <math.h>

int main() {
    double angle = 45.0;
    double radian = angle * (M_PI / 180.0);

    double sine = sin(radian);
    double cosine = cos(radian);
    double tangent = tan(radian);

    printf("Angle: %.2f degrees\n", angle);
    printf("Sine: %.2f\n", sine);
    printf("Cosine: %.2f\n", cosine);
    printf("Tangent: %.2f\n", tangent);

    return 0;
}
*/

//  math.h roundoff funcs-------------------------------------------------------------------
/*#include<stdio.h>
#include<math.h>
int main()
{
   double num = -4.6;

    double ceil_result = ceil(num); // goes right
    double floor_result = floor(num);//goes left
    double round_result = round(num);//round off
    double absolute_value = fabs(num);// -ve to +ve

    printf("Original number: %.2f\n", num);
    printf("Ceil: %.2f\n", ceil_result);
    printf("Floor: %.2f\n", floor_result);
    printf("Round: %.2f\n", round_result);
     printf("Absolute value: %.2f\n", absolute_value);

    return 0;
}*/

/*                  //swapping 2 variables---------------------------------------------------------------
#include<stdio.h>
#include<string.h>
int main()
{
    char x[15] = "water";
    char y[15] = "soda";
    char temp[15];

    strcpy(temp , x);
    strcpy(x , y);
    strcpy(y , temp);

    printf("\nx = %s",x);
    printf("\ny = %s",y);
    return 0;
}
*/
/*
//sizeof operator--------------------------------------------------------------------------------------
#include<stdio.h>
int main()
{
     unsigned short int a = -10;
    printf("%d,%d",a,sizeof(a));
    return 0;
}*/

/*
#include<stdio.h>
int main()
{
    int a = 10;
    char c ='a';
    float sum;

    int sub;
    int x;
    x = (int)3.142;
    sum = a + c;
    sub = a - c;

    printf("\nSum is %f",sum);
    printf("\n %d",x);
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int a=10;
    int *ptr;
    ptr=&a;
    int **dptr;
    dptr = &ptr;
    int ***tptr;
    tptr = &dptr;
    printf("\nThe value of a =%d",a);//10
    printf("\nThe address of a =%d",&a);//6422300
    printf("\n%d",a);
    printf("\nThe value of ptr =%d",ptr);//6422300 same as &a bcoz we're assigning value of &a into ptr see line 6 so both has same values ptr and &ptr are different.
    printf("\nThe address of ptr =%d",&ptr);//6422296
    printf("\nThe value pointed by ptr = %d",*ptr);//10
    printf("\n%d",dptr);//6422296
    printf("\n%d",&tptr);//6422288
    printf("\n%d",**dptr);//10
    printf("\n%d",***tptr);//10
    return 0;
}
*/
/*------------------------------------
#include<stdio.h>
int main()
{
    int n;
    do
    {
        printf("enter num: ");
        scanf("%d",&n);
        printf("%d\n",n);

        if(n%2==0)
        {
            break;
        }
    }
    while(5);
    printf("thank you!");
    return 0;
}
--------------------------------------
*/

/*
-------------------------------
#include <stdio.h>
int main() {
    if (printf("hello")) {}
    return 0;
}
-------------------------------
*/

/*
#include<stdio.h>
void birthday(char x[], int y)
{
    printf("\nHappy birthday dear %s!",x);
    printf("\n You are %d years old!", y);
}

int main()
{
    char name[] = "Deepu";
    int age = 21;

    birthday(name, age);

    return 0;
}
-----------------------------------------------
*/
/*#include<stdio.h>
   void birthday()
   {
    printf("\n ***Happy Birthday To You!***");
    printf("\n   Happy Birthday To You!");
    printf("\n   Happy Birthday To You!");
    printf("\n   Happy Birthday To You!");
    printf("\n   Happy Birthday To You!");
   }

    int main()
{
    birthday();
    birthday();
    birthday();
    birthday();
    birthday();
    return 0;
}

-------------------------------------------------------------------*/
/*
#include<stdio.h>
int main()
{
    int a;
    a = 2;
    a = 10;
    printf("%d",a);
    return 0;
}
*/
/*------------------------------------------------
 #include<stdbool.h>
    bool sunny = false;
    if(!sunny)
    {
        printf("\nIt's sunny");
    }
    else
    {
        printf("\nIt's cloudy ");
    }
    ----------------------------------------------
    */
/*                   triangle stars 12345
#include<stdio.h>
int main()
{
    int n,i ,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("*\t");
        }
        printf("\n\n");
    }
    return 0;
}
*/
/*
//                   triangle stars 5 4 3 2 1
    #include<stdio.h>
    int main()
    {
        int n,i,j;
        printf("\nEnter n: ");
        scanf("%d",&n);
        for(i=n;i>=1;i--)
        {
            for(j=1;j<=i;j++)
            {
                printf("*\t");
            }
            printf("\n\n");
        }
        return 0;
    }
*/
/*
#include<stdio.h>
int main()
{
    int i,j;

    for(i=5;i>=1;i--)
    {
        for(j=i;j<=5;j++)
        {                                  5 45 345 2345 12345
            printf("%d\t",j);
        }
        printf("\n\n");
    }
    return 0;
}*/
/*
#include<stdio.h>
int main()
{
    int i,k,j;
    for(i=1;i<=5;i++)
    {                                           1
        for(k=5;k>=i;k--)                      12
        printf(" ");                          123
        for(j=1;j<=i;j++)                    1234
        {                                   12345
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int i,j,k=1;
    for(i=1;i<=6;i++)
    {
        for(j=2;j<=i;j++)
        {
            printf("%d ",j%2);
        }
        printf("\n");
    }
    return 0;
}*/
//     if(i==j||i==5||j==5)
//     printf("* ");
// else
// printf("  ");
/*
#include<stdio.h>
int main()
{
int i,j,k;
for(i=1;i<=5;i++)
{
for(k=5;k>=i;k--)
printf(" ");
for(j=1;j<=i;j++)
{
    printf("%d",j);
}
printf("\n");
}
return 0;
}
*/
// #include<stdio.h>
// int main()
// {
//     int
//     return 0;
// }