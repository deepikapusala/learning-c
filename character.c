#include <stdio.h>      //compiler will just give a warning but do ./a.exe
#include <string.h>
#include <ctype.h>
int main()
{
    char name[50] , letter;
    int i;

   // enter name, it displays ur name.
    printf("\nEnter name: ");               
    gets(name);
      //gets and puts are in the header file string.h
    printf("\nYour name is : ");
    puts(name);

    while (letter = getch())      
    {
          printf("\n%c",letter);
        if (isalpha(letter)) // alphabet
        {
            printf("\nIt's an alphabet.");
            if (islower(letter)) // alphabet-lowercase
            {
                printf("\nIt's a lower case letter.");
            } 
            else if (isupper(letter)) // alphabet-uppercase
            {
                printf("\nIt's an upper case letter.");
            }
        }
        else if (isdigit(letter)) //digit
        {
            printf("\nIt's a digit.");
        }
        else if (ispunct(letter)) // punctuation
        {
            printf("\nIt's a punctuation mark!");
        }
        else if (letter = ' ')
        {
            break;
        }
        else
        printf("\nend");
        printf("\n");
    }
    return 0;
}

 