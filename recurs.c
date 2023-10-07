 #include<stdio.h>
int f(int x, int n);


int main()
{
    int x = 2, result;
    result = f(f(f(x,1),1),1);
    printf("\nf(f(f(%d))) = %d",x,result);
    return 0;
}

int f(int x, int n)
{
    if (n == 0)
        return x;
    else
        return f(x*x, n-1);//4,0 //16,0 //256,0

    return 0;
}

