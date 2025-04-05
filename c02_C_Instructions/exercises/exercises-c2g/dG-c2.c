/* Question --> (d), [G], Chapter 2 */
//Attempt the following questions:

/* Wind-chill factor is the felt air temperature on exposed skin due to wind.
The wind-chill temperature is always lower than the air temperature, and is calculated
as per the following formula:
wcf = 35.74 + 0.6215t + (0.4275t - 35.75) * v^{0.16}
where t is temperature and v is wind velocity. Write a program to receive values of t and v
and calculate the wind-chill factor (wcf)*/

#include <stdio.h>
#include <math.h>

int main() {

     float t, v, wcf;

     printf("Enter the values for temperature(F) and wind velocity(mph): ");
     scanf("%f %f", &t, &v);

     wcf = 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * pow(v, 0.16);

     printf("The wind-chill factor is %.2f\n", wcf);
}