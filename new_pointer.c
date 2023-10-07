#include<stdio.h>
int main()
{
    int *ptr;
    int x;

    ptr = &x;
    *ptr = 0;

    printf("\n x = %d", x);          // x = 0
    printf("\n *ptr = %d", *ptr);    // *ptr = 0 

    *ptr += 5;
    printf("\n x = %d", x);          // x = 5
    printf("\n *ptr = %d", *ptr);    // *ptr = 5

    (*ptr)++;
    printf("\n x = %d", x);          // x = 6
    printf("\n *ptr = %d", *ptr);    // *ptr = 6

    return 0;
}
   /* int a = 10;
    int *ptr = &a;
    printf("\n a is %d",a);
    printf("\naddress of a = 10 is %d",&a);
    printf("\npointer is %d....&a = ptr.",ptr);
    printf("\nvalue in the address which is stored inside the pointer is %d.",*ptr);
     printf("\nvalue in the address which is stored inside the pointer is %d.",*(&a));
*/