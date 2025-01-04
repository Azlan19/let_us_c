/* Question --> (b), [G], Chapter 2 */
//Attempt the following questions:

/* Write a program to receive Cartesian co-ordinates
(x,y) of a point and convert them into polar co-ordinates (r, q) 

Hint: r = sqrt(x^2 + y^2) and q = tan^{-1}(y/x) */

#include <stdio.h>
#include <math.h>
int main() {

     float x, y, r, q;

     printf("Enter the Cartesian coordinates (x, y): ");
     scanf("%f %f", &x, &y);

     r = sqrt((pow(x, 2)) + (pow(y,2)));
     q = atan2(y, x); // arctangent (inverse tangent) function in radians

     printf("The Cartesian co-ordiantes (%.2f, %.2f) as polar coordinates are (%.2f, %.2f) in radians\n", x, y, r, q);
}