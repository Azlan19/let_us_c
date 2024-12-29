/* Question --> (b), [D], Chapter 2 */
//What will be the output of the following program?

#include <stdio.h>

int main() {
     
     int a, b, c, d;
     a = 2 % 5;
     b = -2 % 5;
     c = 2 % -5;
     d = -2 % -5;

     printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

     return 0;
}

//Output --> a = 2, b = -2, c = 2, d = -2