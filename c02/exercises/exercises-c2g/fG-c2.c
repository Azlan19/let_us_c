/* Question --> (f), [G], Chapter 2 */
//Attempt the following questions:

/* Two numbers are input through the keyboard into two locations C and D.
Write a program to interchange the contents of C and D.*/

#include <stdio.h>

int main() {
     
     int C, D, temp;

     printf("Enter a number to be sorted in C: ");
     scanf("%d", &C);
     printf("Enter a number to be sorted in D: ");
     scanf("%d", &D);

     printf("Before swapping, C = %d and D = %d\n", C, D);

     temp = C;
     C = D;
     D = temp;

     printf("After swapping, C = %d and D = %d\n", C, D);

     return 0;
}