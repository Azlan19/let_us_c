/* Question --> (a), [D], Chapter 2 */
//What will be the output of the following program?

#include <stdio.h>

int main() {
     int i = 2, j = 3, k, l;
     float a, b;

     k = i / j * j;
     l = j / i * i;
     a = i / j * j;
     b = j / i * i;

     printf("%d %d %f %f\n", k, l, a, b);
     
     return 0;
}

//Output --> 0 2 0.000000 2.000000 