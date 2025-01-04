/* Question --> (e), [G], Chapter 2 */
//Attempt the following questions:

/* If value of an angle is input through the keyboard, write a program to print
all its Trigonometric ratios */

#include <stdio.h>
#include <math.h>

int main() {

     float angle, radians;

     printf("Enter the value of an angle in degrees: ");
     scanf("%f", &angle);

     radians = angle * (M_PI / 180.0);

     printf("sin(%.2f) = %.2f\n", angle, sin(radians));
     printf("cos(%.2f) = %.2f\n", angle, cos(radians));
     printf("tan(%.2f) = %.2f\n", angle, tan(radians));
}