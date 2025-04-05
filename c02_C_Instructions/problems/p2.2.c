//Reverse digits of a 5-digit number

/* If a 5 digit number is input through the
keyboard, write a program to reverse the number*/

#include <stdio.h>
int main() {
     int n, d5, d4, d3, d2, d1;
     long int rev_num; //Offers a bigger range of integers

     printf("\nEnter a 5 digit number (less than 32767): ");
     scanf("%d", &n);

     d5 = n % 10;   //5th digit
     n = n / 10;    //Remaining digits
     d4 = n % 10;   //4th digit
     n = n / 10;    //Remaining digits
     d3 = n % 10;   //3rd digit
     n = n / 10;    //Remaining digits
     d2 = n % 10;   //2nd digit
     n = n / 10;    //Remaining digits
     d1 = n % 10;   //1st digit

     rev_num = d5 * 10000 + d4 * 1000 + d3 * 100 + d2 * 10 + d1;

     printf("The reversed number is %ld\n", rev_num); //specifier %ld is used for long integers

     return 0;
}