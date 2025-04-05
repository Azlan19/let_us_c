//Check whether a number is even or odd

/* Any integer is input through the keyboard. Write a program to find out
whether it is an odd number or even number*/

#include <stdio.h>

int main() {
     int num;

     printf("Enter an integer: ");
     scanf("%d", &num);

     if (num % 2 == 0)
          printf("The number you entered (%d) is an even number\n", num);
     else
          printf("The number you entered (%d) is an odd number\n", num);

     return 0;
}