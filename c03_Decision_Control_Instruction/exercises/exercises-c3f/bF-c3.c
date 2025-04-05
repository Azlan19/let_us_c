/* Question --> (b), [F], Chapter 3 */
//Attempt the following questions:

/* If ages of Ram, Shyam and Ajay are input through the
keyboard, write a program to determine the youngest of the three*/

#include <stdio.h>

int main() {
     int r, s, a;

     printf("Enter Ram's age: ");
     scanf("%d", &r);
     printf("Enter Shyam's age: ");
     scanf("%d", &s);
     printf("Enter Ajay's age: ");
     scanf("%d", &a);

     if (r < s && r < a) {
          printf("Ram, %d, is the youngest out of all of them\n", r);
     }
     else if (s < a) {
          printf("Shyam, %d, is the youngest out of all of them\n", s);
     }
     else {
          printf("Ajay, %d, is the youngest out of all of them\n", a); 
     } 

     return 0;
}