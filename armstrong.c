#include <stdio.h>
#include <math.h>

int main() {
  int n, temp, digit, sum = 0;
  printf("Enter a number: ");        //enter a number
  scanf("%d", &n);

  temp = n; 
  while (temp > 0) 
  {
    digit = temp % 10;              //logic 
    sum += pow(digit, 3); 
    temp /= 10;
  } 

  if (n == sum) {
    printf("%d is an Armstrong number.\n", n);
  } else {
    printf("%d is not an Armstrong number.\n", n);
  }

  return 0;
}