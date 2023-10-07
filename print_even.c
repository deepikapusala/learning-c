#include<stdio.h>
int main()
{
    int i,n;
    i=2; // prints evn numbers as starting num is 2 and in bottom we kept i +=2 whereas i = 1 we get all dd numbers
    printf("Enter n: ");
    scanf("%d",&n);
    
    while(i<=n)     
    {
        printf("\n%d",i);
        i+=2;
    }
    return 0;
}
