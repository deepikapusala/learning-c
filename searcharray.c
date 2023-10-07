#include <stdio.h>
void main()
{
  int i, a[20], n, n1, n2;

  printf("how many elements do u want  in an array :  \n");
  scanf("%d", &n);
  // reading values in array
  printf("enter %d elements into array: \n", n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  // printing read values in array
  printf("array elements are \n");
  for (i = 0; i < n; i++)
  {
    printf("a[%d] = %d\n", i, a[i]);
  }
  // if you enter value it will display it's array i.e., it's location.
  printf(" \nwhich number's location you want TO SEARCH : ");
  scanf("%d", &n1);
  for (i = 0; i < n; i++)
  {
    if (a[i] == n1)
    {
      printf("%d is located at array a[%d]\n", n1, i); 
    }
  }
  // if u enter array's location(starts from 0) it will display the value containing it.
  printf("\nEnter the location of number u wanted to print: ");
  scanf("%d", &n2);
  for (i = 0; i < n; i++)
  {
    if (i == n2)
    {
      printf("\n a[%d] has the number %d\n", n2, a[n2]);
    }
  }
}
