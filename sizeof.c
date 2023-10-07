#include<stdio.h>
int main()
{
    int a;
    float b;
    char c;
    double d;
    printf("\n Memory req for int a is %d bytes.",sizeof(a));
    printf("\n Memory req for float b is %d bytes.",sizeof(b));
    printf("\n Memory req for char c is %d bytes.",sizeof(c));
    printf("\n Memory req for double d is %d bytes.",sizeof(d));
    printf("\n Memory req for long double is %d bytes.",sizeof(long double));
    printf("\n Memory req for short int is %d bytes.",sizeof(short int));
    return 0;
}