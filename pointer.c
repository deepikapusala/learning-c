#include<stdio.h>
int main()
{
    int a=10;
    int *ptr;
    ptr=&a;
    int **dptr;
    dptr = &ptr
    int ***tptr;
    tptr = &dptr;
    printf("\nThe value of a =%d",a);//10
    printf("\nThe address of a =%d",&a);//6422300
    // printf("\n%d",a);//10
    printf("\nThe value of ptr =%d",ptr);//6422300 same as &a bcoz we're assigning value of &a into ptr see line 6 so both has same values ptr and &ptr are different.
    printf("\nThe address of ptr =%d",&ptr);//6422296
    printf("\nThe value pointed by ptr = %d",*ptr);//10
    printf("\n%d",dptr);//6422296
    printf("\n%d",&tptr);//6422288
    printf("\n%d",**dptr);//10
    printf("\n%d",***tptr);//10
    return 0;
}
