/*
 #include <stdio.h>
int main()
{
  int n1, n2, n3, n;
  n1 = 0;
  n2 = 1;
  n3 = n1 + n2;
  printf("\nEnter how many numbers do u want? : ");
  scanf("%d", &n);

  printf("\n%d\t%d\t", n1, n2);
  for (int i = 3; i <= n; i++)
  {
    printf("%d\t", n3);
    n1 = n2;
    n2 = n3;
    n3 = n1 + n2;
  }
  return 0;
}
*/

#include<stdio.h>
int fib(int n);

int main()
{
  // TODO: Improve this program by accepting an integer as input and pass to fib(n)
  printf("\n%d",fib(8));
  return 0;
}
int fib(int n)
{
  if (n == 0)
  {
    return 0;
  }
  if (n == 1)
  {
    return 1;
  }

  int fibNm1,fibNm2,fibN;
  fibNm1 = fib(n-1);
  fibNm2 = fib(n-2);
  fibN = fibNm1 + fibNm2;
  return fibN;
}
