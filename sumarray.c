#include<stdio.h>
#include<math.h>
int main()
{
    int a[50], b[50],i,j,n, sum, value1, value2, c[50], k, value3, d[50], l; 
    double square, cube, cubeRoot;
    
    printf("\nDisplays Sum");
    //How many??
    printf("\nHow many elements do you want in an array?: ");
    scanf("%d",&n);
    //reading values
    printf("\nEnter elements in the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //printing array
    printf("\nYour array has the following numbers: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    //sum
    sum = 0;
   for(i=0;i<n;i++)
   {
    sum = sum + a[i];
   }
   printf("\nSum: %d",sum);
   //-----------------------------------------------------------------------------------------
   // to find square
     printf("\nSquare");
   printf("\nHow many elements do you want in an array?: ");
    scanf("%d",&value1);
    //reading values
    printf("\nEnter elements in the array: ");
    for(j=0;j<value1;j++)
    {
        scanf("%d",&b[j]);
    }
    //printing array
    printf("\nYour array has the following numbers: \n");
    for(j=0;j<value1;j++)
    {
        printf("%d\t",b[j]);
    }
     //square
    for(j=0;j<value1;j++)
    {
        square = pow(b[j],2);
         printf("\n Square of the %d is: %lf \n",b[j],square);
    }
 //-----------------------------------------------------------------------------------------------------
  // to find cube
     printf("\nCube");
  printf("\nHow many elements do you want in an array?: ");
    scanf("%d",&value2);
    //reading values
    printf("\nEnter elements in the array: ");
    for(k=0;k<value2;k++)
    {
        scanf("%d",&c[k]);
    }
    //printing array
    printf("\nYour array has the following numbers: \n");
    for(k=0;k<value2;k++)
    {
        printf("%d\t",c[k]);
    }
     //cube
    for(k=0;k<value2;k++)
    {
        cube = pow(c[k],3);
         printf("\n Cube of the %d is: %lf \n",c[k],cube);
    }
    //--------------------------------------------------------------------------------------------------
    //cbrt
     printf("\nCuberoot");
    printf("\nHow many elements do you want in an array?: ");
    scanf("%d",&value3);
    //reading values
    printf("\nEnter elements in the array: ");
    for(l=0;l<value3;l++)
    {
        scanf("%d",&d[l]);
    }
    //printing array
    printf("\nYour array has the following numbers: \n");
    for(l=0;l<value3;l++)
    {
        printf("%d\t",d[l]);
    }
     //cuberoot
    for(l=0;l<value3;l++)
    {
        cubeRoot = cbrt(d[l]);
         printf("\n cuberoot of the %d is: %lf \n",d[l],cubeRoot);
    }

    return 0;
}