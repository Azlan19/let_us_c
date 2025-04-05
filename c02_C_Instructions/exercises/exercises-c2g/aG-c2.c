/* Question --> (a), [G], Chapter 2 */
//Attempt the following questions:

/* If a five-digit number is input through the keyboard, write a program
to calculate the sum of its digits (Hint: Use the modulus operator %)*/

#include <stdio.h>

int main() {
     
     int n, d1, d2, d3, d4, d5, sum_of_digits;

     printf("Please enter a 5-digit number: ");
     scanf("%d", &n);

     d1 = n / 10000;
     n = n % 10000;
     d2 = n / 1000;
     n = n % 1000;
     d3 = n / 100;
     n = n % 100;
     d4 = n / 10;
     n = n % 10;
     d5 = n / 1;

     sum_of_digits = d1 + d2 + d3 + d4 + d5;

     printf("The sum of the digits is %d\n", sum_of_digits);

     return 0;
}