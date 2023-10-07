#include<stdio.h>
#include<string.h>
struct cse_student  //cse_student is a tag name
{
    char name[100]; //members: name, branch, cgpa and age
    char branch[10];
    float cgpa;
    int age;  
  
};

void printstudent(struct cse_student stu);    //decalring a function

int main()
{
    struct cse_student stu[3];     stu is an variable and it is an array of size 3 means stu has 3 students in it
    // students details
    printf("\nStudent1's details-(name,branch, cgpa,age):  "); 
    scanf("%s",stu[0].name);
    scanf("%s",stu[0].branch);
    scanf("%f",&stu[0].cgpa);
    scanf("%d",&stu[0].age);

 printf("\nStudent2's details-(name,branch, cgpa,age):  ");
    scanf("%s",stu[1].name);
    scanf("%s",stu[1].branch);
    scanf("%f",&stu[1].cgpa);
    scanf("%d",&stu[1].age);

 printf("\nStudent3's details-(name,branch, cgpa,age):  ");
    scanf("%s",stu[2].name);
    scanf("%s",stu[2].branch);
    scanf("%f",&stu[2].cgpa);
    scanf("%d",&stu[2].age);
//printing
   printf("Details of 3 students: ");
   printf("\n---------------------------");
    printstudent(stu[0]); //easy method yo print all the data by using arrays
    printstudent(stu[1]);
    printstudent(stu[2]);

    return 0;
}

void printstudent(struct cse_student stu) //void: return type, printstudent: function name, (struct tag_name variable)
{
printf("\nName: %s\nBranch: %s\nCGPA: %f\nAge: %d\n",stu.name,stu.branch,stu.cgpa,stu.age);//here while u are writing ver name u can write stu but don't write with array size like stu[1], stu[5],etc.
}