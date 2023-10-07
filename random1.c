#include <stdio.h>

int main() {
  char answer;

  printf("Do you like cats? (y/n) ");
  scanf(" %c", &answer);

  if (answer == 'y') {
    printf("You like cats!\n");
  } else if (answer == 'n') {
    printf("You don't like cats.\n");
  } else {
    printf("Invalid answer.\n");
  }

  printf("Do you like dogs? (y/n) ");
  scanf(" %c", &answer);

  if (answer == 'y') {
    printf("You like dogs!\n");
  } else if (answer == 'n') {
    printf("You don't like dogs.\n");
  } else {
    printf("Invalid answer.\n");
  }

  return 0;
}