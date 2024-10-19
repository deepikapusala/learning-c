#include<stdio.h>
int main()
{
   int n;
   printf("\nEnter n: ");
   scanf("%d",&n);
    int count = 0;
    float y;
    y = 1.0;
    while(count < n) 
    {
      //ythis is a while loop runs on a condition "<n"
      y = y * 2; 
      count++;
    }
   printf("\n 2 to power %d is %lf.",n,y);
   return 0;
}