#include <stdio.h>

int main()
{
    int tel, eng, hin, maths, sci, soc, total, avg;
    float per;
    printf("\nenter marks of 6 subjects: \n");
    scanf("%d %d %d %d %d %d", &tel, &eng, &hin, &maths, &sci, &soc);
    printf("\n tel=%d\n eng=%d\n hin=%d\n maths=%d\n sci=%d\n soc=%d", tel, eng, hin, maths, sci, soc);
    total = tel + eng + hin + maths + sci + soc;
    printf("\n total marks of all 6 subjects: %d", total);
    avg = total /6;
    printf("\n average of 6 subjects= %d", avg);
    per = (total/600.0)*100;
    printf("\n your percentage: %f ", per);

    if(tel>35&&hin>35&&eng>35&&maths>35&&sci>35&&soc>35)
     {
        if(per<=100 && per>=91)
          printf("\n Grade A+");
          else if(per<=90 && per>=76)
          printf("\n Grade A ");
          else if(per<=75 && per>=61)
          printf("\n Grade B");
          else if(per<=60 && per>=46)
          printf("\n Grade C");
          else if(per<=45 && per>=35)
          printf("\n Grade D");

     }
    else 
        printf("\nYou FAILED.");
    
    return 0;
}