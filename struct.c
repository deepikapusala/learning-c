#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    char name[100];
    float cgpa;
};
int main()
{
    struct student s1;
    s1.roll = 143;
    strcpy(s1.name, "Deepika");
    s1.cgpa = 9.8;

    printf("\nStudent's name: %s",s1.name);
    printf("\nRoll number: %d",s1.roll);
    printf("\nCgpa: %f",s1.cgpa);
    return 0;
}


//                          syntax of structures:
/*
#include<stdio.h>
#include<string.h>
struct tag_name
{
    data_type member1;    //declaration 
    data_type member2;   
    ---------------;
    ---------------;
};
int main()
{
    struct tag_name user_defined_var;
    user_defined_var.member1 = sth;       //usage
    user_defined_var.member2 = sth;
    -------------;
    -------------;

    printf("\n sth text = %format specifier",user_defined_var.member1);
    printf("\n sth text = %format specifier",user_defined_var.member2);
    ---------------------------------------------------------------;
    ---------------------------------------------------------------;
    return 0;
}
*/