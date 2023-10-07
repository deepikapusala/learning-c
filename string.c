#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50], str2[50];
    char str[50] ="My name is Deepika Pusala";

    printf("\nEnter text for str1: ");
    scanf("%s", str1);
    printf("\nEnter text for str2: ");
    scanf(" %s", str2);
    
    // strcmp

    int result = strcmp(str1, str2);
    printf("\n%d...this is string comparison.", result);

    // strcat
    strcat(str1, str2);
    printf("\n%s.....this is string concatenation.", str1);

    // strcopy
    strcpy(str1, str2);
    printf("\n%s.....this is string copy.", str1);

    // strlen
    printf("\n%d this is length of str1.", strlen(str1));

    // strreverse
    printf("\n reverse:  %s", strrev(str1));

    //strlwr and strupr
    printf("\nUpper: %s",strupr(str));
    printf("\nLower: %s",strlwr(str));

    return 0;
}


