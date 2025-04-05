/* Question --> (c), [G], Chapter 2 */
//Attempt the following questions:

/* Write a program to receive values of latitude (L1, L2) and longitude (G1, G2), in degrees,
of two places on the earth and output the distance (D) between them in nautical miles. The formula
for distance in nautical miles is:
D = 3963 cos^{-1}(sinL1sinL2 + cosL1cosL2 * cos(G2 - G1))*/

#include <stdio.h>
#include <math.h>

int main() {
    double L1, L2, G1, G2, D;

    // Input latitude and longitude in degrees
    printf("Enter latitude of first place (L1 in degrees): ");
    scanf("%lf", &L1);
    printf("Enter longitude of first place (G1 in degrees): ");
    scanf("%lf", &G1);
    printf("Enter latitude of second place (L2 in degrees): ");
    scanf("%lf", &L2);
    printf("Enter longitude of second place (G2 in degrees): ");
    scanf("%lf", &G2);

    // Convert degrees to radians
    L1 = L1 * (M_PI / 180.0);
    L2 = L2 * (M_PI / 180.0);
    G1 = G1 * (M_PI / 180.0);
    G2 = G2 * (M_PI / 180.0);

    // Calculate the distance using the formula
    D = 3963 * acos(sin(L1) * sin(L2) + cos(L1) * cos(L2) * cos(G2 - G1));

    // Display the distance in nautical miles
    printf("Distance (D) between the two places: %.2f nautical miles\n", D);

}

//Taken from ChatGPT...