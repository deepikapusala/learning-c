#include <stdio.h>
struct vector
{
    int x;
    int y;
};

void calSum(struct vector v1, struct vector v2, struct vector v3);

int main()
{
    struct vector v1 = {2, 10}; //int v1.x = 5; int v1.y = 10;
    struct vector v2 = {3, 5};  //int v2.x = 3; int v2.y = 7;
    struct vector v3;
    calSum(v1, v2, v3);

    return 0;
}

void calSum(struct vector v1, struct vector v2, struct vector v3)
{
    v3.x = v1.x + v2.x;
    v3.y = v1.y + v2.y;

    printf("\n sum of x is : %d",v3.x);
    printf("\n sum of y is : %d",v3.y);
    printf("\n new vector is %di + %dj.",v3.x,v3.y);
}