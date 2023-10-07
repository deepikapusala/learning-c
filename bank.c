#include <stdio.h>
#include<string.h>
typedef struct bankaccount      
{
    int accNum;
    char name[10];
} acc;

void printacc(struct bankaccount acco);

int main()
{     
   acc acco[6];
    printf("\nWelcome to ABC bank.");
    acco[0] = (acc){1, "Deepika"};
    acco[1] = (acc){2, "Bhavya"};
    acco[2] = (acc){3, "saniya"};
    acco[3] = (acc){4, "Kashvi"};
    acco[4] = (acc){5, "lokesh"};

    acco[5].accNum = 6;
    strcpy(acco[5].name, "Vivek");

      for (int i = 0; i < 6; i++)
    {
        printacc(acco[i]);
    }


    return 0;
}
void printacc(struct bankaccount acco)
{
    printf("\naccount number: %d\naccount holder: %s\n",acco.accNum, acco.name);
}
