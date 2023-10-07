#include <stdio.h>
void printAddress(int *n);
int main()
{
    int n = 4;               // n = 4
    printf("\n%u", &n);      // hexadecimal
    printAddress(&n);
    return 0;
}
void printAddress(int *n) 
{
    printf("\n%u", n);
}
