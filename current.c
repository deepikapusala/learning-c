#include<stdio.h>
#include<string.h>

int main()
{
char name[50];
int units;
float charges;
printf("\nenter customer name & consumed units:  \n");
fgets(name,50,stdin);
name[strlen(name)-1] = '\0';
scanf("%d",&units);
if(units>=0 && units<=200)
{
    charges=0.5*units;
}
else if(units>=201&&units<=400)
{
    charges=100+0.65*(units-200);
}
else if(units>=401&&units<=600)
{
    charges=230+0.80*(units-400);
}
else if(units>=601)
{
    charges=390+1.00*(units-600);
}
printf("%s has to pay rupees: %f for using %d units",name,charges,units);

    return 0;
}