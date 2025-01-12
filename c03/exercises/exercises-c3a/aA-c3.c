//What will be the output of the following programs?

#include <stdio.h>

int main() {
     int a = 300, b, c;

     if (a >= 400)
          b = 300;
     c = 200;

     printf("%d %d", b, c);

     return 0;
}

//b displays any integer as it is not initialized

//Output --> [Any integer] 200