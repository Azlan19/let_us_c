/* Question --> (a), [F], Chapter 1 */
/* Attempt the question */

/* Temperature of a city in Fahrenheit degrees is input through the keyboard.
Write a program to convert this temperature into Centigrade degrees*/

# include <stdio.h>
int main() {
     float f, cg;

     printf("\nEnter the Temperature of the city in Fahrenheit: ");
     scanf("%f", &f);

     cg = (f - 32) * 5.0 / 9.0; /* Use 5.0 and 9.0 to avoid integer division*/

     printf("The city's temperature of %.2f in Fahrenheit is %.2f in Centigrade degrees\n", f, cg);
     /* %.2f limits to only 2 decimal places*/

     return 0;
}