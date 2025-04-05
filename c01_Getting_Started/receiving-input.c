/* Calculation of simple interest */
/* Author: Azlan19 Date: 24/12/2024 */
# include <stdio.h>
int main()
{
     int p, n;
     float r, si;
     printf("Enter values of p, n, r\n");
     scanf("%d %d %f", &p, &n, &r);
     si = p * n * r/100;
     printf("%f\n", si);
     return 0;
}