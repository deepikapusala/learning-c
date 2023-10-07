 #include<stdio.h>
int main()
{
    float cgpa;
    int lang, proj, age;

    printf("\nwhat's ur cgpa?: ");
    scanf("%f", &cgpa);
    printf("\nhow many projects have u done?: ");
    scanf("%d", &proj);
    printf("\nhow many languages do u know? : ");
    scanf("%d", &lang);
    printf("\nwhat's ur age?? : ");
    scanf("%d",&age);

    if (cgpa > 9 && proj > 3 && lang > 4&&age>=19&&age<=26)
    {
        printf("\nu r hired");
    }
    else
    {
        printf("\nu r good 4 nothing!!");
    }
    return 0;
}
