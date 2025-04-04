/* Question --> (a), [F], Chapter 3 */
//Attempt the following questions:

/* A five-digit number is entered through the keyboard. Write a program to obtain
the reversed number and determine whether the original and reversed numbers are equal or not*/

#include <stdio.h>

int main() {
     int num_org, temp, dig1, dig2, dig3, dig4, dig5, num_rev;

     printf("Enter a 5 digit number: ");
     scanf("%d", &num_org);

     temp = num_org; //Temporary assignment of the original numbers

     dig1 = num_org / 10000;
     num_org = num_org % 10000;
     dig2 = num_org / 1000;
     num_org = num_org % 1000;
     dig3 = num_org / 100;
     num_org = num_org % 100;
     dig4 = num_org / 10;
     num_org = num_org % 10;
     dig5 = num_org / 1;

     num_rev = (dig5 * 10000) + (dig4 * 1000) + (dig3 * 100) + (dig2 * 10) + dig1;

     printf("Your number in reverse is %d\n", num_rev);

     if (temp == num_rev)
          printf("This reversed number is the same as your original number, %d\n", temp);
     else
          printf("This reversed number is different from your original number, %d\n", temp);

     return 0;
}