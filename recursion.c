#include<stdio.h>
void printHW(int count); //parameters

int main()
{
    printHW(0);          //arguments
    return 0;
}
//recursive function
void printHW(int count)  //parameters
{
    if(count == 5)
    {
        return; 
    }
    printf("\tHello deepu");
    printHW(count+1);
}

 //this is not a recursion function but just a function
#include<stdio.h>
int sum(int a, int b);            //parametrs
int main()
{
    int a, b;
    int x = sum(5,6);             //arguments
    printf("\nAddition of a and b is %d",x);
    return 0;
}
int sum(int x, int y)             //parameters
{
    int p;
    p = x + y;
    return p;
}*/