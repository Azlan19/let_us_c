//What will be the output of the following programs?

#include <stdio.h>

int main() {
     int x = 3, y, z;

     y = x = 10;
     z = x < 10;

     printf("x = %d y = %d z = %d\n", x, y, z);

     return 0;
}

//Output --> x = 10 y = 10 z = 0
// z is 0 because the "x < 10" is False
// Since x is declared as an int, it's output is 0 to represent False