#include <stdio.h>
#include <conio.h>
int main()
{
    float cgpa;
    int lang, proj, age;
    char answer;

    printf("\nwhat's ur cgpa?: ");
    scanf("%f", &cgpa);

    if (cgpa > 9)
    {
        printf("\nhow many projects have u done?: ");
        scanf("%d", &proj);
        if (proj > 3)
        {
            printf("\nhow many languages do u know? : ");
            scanf("%d", &lang);
        }
    }
    else
    {
        printf("\nu r good 4 nothing!!");
    }
    printf("\nis your communication skills good or bad? :");
    // scanf("%c",&answer);
    answer = getch();
    if (answer == 'g')
    {
        printf("\n\ndo you know eng and hin?: ");
        char c = getch();
        if (c == 'y')
        {
            printf("\n\nyou are hired!");
        }
        else
        {
            printf("learn multiple languages");
        }
    }
    else if (answer == 'b')
    {
        printf("you are good for nothing!");
    }
    else
    {
        printf("invalid answer :( ");
    }

    return 0;
}
