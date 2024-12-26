/* Question --> (b), [F], Chapter 1 */
/* Attempt the question */

/* The length and breadth(width) of a rectangle and radius of a circle
are input through the keyboard. Write a program to calculate the area and
perimeter of the rectangle, and the area and circumference of the circle*/

# include <stdio.h>
#include <math.h> /* For the actual value of pi*/

int main() {
     float l, w, r;

     printf("\nEnter the length and width of a rectangle, and also the radius of a circle: ");
     scanf("%f %f %f", &l, &w, &r);

     float rec_area = l * w;
     float rec_per = 2.0 * (l + w);
     float cir_area = M_PI * r * r;
     float cir_circum = M_PI * 2 * r;

     printf("The area of the rectangle is %.2f\n", rec_area);
     printf("The perimeter of the rectangle is %.2f\n",rec_per);
     printf("The area of the circle is %.2f\n", cir_area);
     printf("The circumference of the circle is %.2f\n", cir_circum);

     /* No return statement needed because it is included in <math.h> */
}