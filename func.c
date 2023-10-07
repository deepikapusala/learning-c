
#include<stdio.h>
int sum(int ,int);

int main()
{
    int x,y,result;
    printf("\nEnter x & y: ");
    scanf("%d %d",&x ,&y);
    result = sum(x,y);    //func calling x,y-actual parameters
    printf("\n sum of x and y is: %d",result);
}
    int sum(int a, int b)
    {
        int c; //local var
        c=a+b;
        return c;
    }

/*
#include<stdio.h>
void square(int n);
int main()
{
   int number = 4;
   square(number);
   printf("\nnumber = %d", number);

    return 0;
}
void square(int n)
{
    n = n*n;
    printf("\nn = %d",n);
    //return n;
}
*/
