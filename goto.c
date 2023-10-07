#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;
    printf("\nEnter values for a & b:");
    scanf("%d %d", &a, &b);

    if (a > b)
        goto a;
    else if (b > a)
        goto b;
    else if (a = b)
        goto c;
a:
    printf("\n%d is greater than %d", a, b);
    return 0;
b:
    printf("\n%d is greater than %d", b, a);
    return 0;
c:
    printf("\n%d is equal to %d", a, b);
    return 0;
}
