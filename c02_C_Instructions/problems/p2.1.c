//Find area of a triangle, given its sides//

/*If lengths of three sides of a triangle are input through the
keyboard, write a program to find the area of the triangle.*/

#include <stdio.h>
#include <math.h> //for sqt()

int main() {
     float a, b, c , sp, area;

     printf("\nEnter the values of the sides of the triangle: ");
     scanf("%f %f %f", &a, &b, &c);

     sp = (a + b + c) / 2;
     area =  sqrt(sp * (sp - a) * (sp - b) * (sp - c));

     printf("The area of the triangle is %.2f\n", area);
}