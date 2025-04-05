/* Calculation of aggregate & percentage marks*/

/* If the marks obtained by a student in 5 different subjects are
input through the keyboard, write a program to find out the total
mark and average mark obtained by the student. Assume that the maximum
mark that can be obtained by a student in each subject is 100.*/

# include <stdio.h>

int main()
{
     int m1, m2, m3, m4, m5, total;

     printf("\nEnter the marks in the 5 subjects ");
     scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

     total = m1 + m2 + m3 + m4 + m5; /* Make sure the type of variable is declared */
     float avg = total / 5; /* Declared either at the start or right before the variable */

     printf("Total Mark: %d\n", total);
     printf("Average Mark: %f\n", avg);

     return 0;
}