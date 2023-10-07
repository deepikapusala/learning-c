#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[10] = "12345"; // A string containing a numeric value
    int magic;

    // Using the atoi function to convert the string to an integer
    magic = atoi(str);  //atoi function is in the header file "stdlib.h"

    printf("The integer value is: %d\n", magic);

    return 0;
}
