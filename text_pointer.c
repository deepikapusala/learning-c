/*
#include<stdio.h>
#include<string.h>
int main()
{
   char text1[50];
   char text2[50] = "Text";
   char text3[50] = "Welcome baby!";

   strcpy(text1, text3);           //strcpy(destination,source)

   printf("\n%s\n%s\n%s", text1, text2, text3);
   char array[3][50];
   strcpy(array[0], "Hello");
   strcpy(array[1], "deepu");
   strcpy(array[2], "wt do u want???");
   printf("\nArrays are:\n %s %s %s",array[0],array[1],array[2]);

 char line1[100], line2[100];
 printf("\nType here: ");
 scanf("%[^\n]s",line1);
 printf("\nYou typed:  %s",line1);
 getchar(); 
 printf("\nType here: ");
 scanf("%[^\n]s",line2);
 printf("\nYou typed:  %s",line2);
   return 0;
}
*/

#include<stdio.h>
void sumandproduct(int a, int b, int *sum, int *product);
int main()
{
  int x = 5, y = 12, sum, product; // u can change values of x&y here.

  sumandproduct(x, y, &sum, &product);
  printf("\nThe sum is: %d and the product is: %d", sum, product);

  return 0;
}

void sumandproduct(int a, int b, int *sum, int *product)
 { *sum = a + b;
  *product = a*b; 
 }
 