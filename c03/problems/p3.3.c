//Check whether a year is leap or not

/* Any year is input through the keyboard. Write a program to determine
whether the year is a leap or not*/

#include <stdio.h>

int main() {
     int year;

     printf("Enter a year: ");
     scanf("%d", &year);

     if (year % 100 == 0) {
          if (year % 400 == 0)
               printf("The year you entered (%d) is a leap year\n", year);
          else
               printf("The year you entered (%d) is not a leap year\n", year);
     }
     else {
          if (year % 4 == 0)
          printf("The year you entered (%d) is a leap year\n", year);
          else
          printf("The year you entered (%d) is not a leap year\n", year);
     }

     return 0;
}