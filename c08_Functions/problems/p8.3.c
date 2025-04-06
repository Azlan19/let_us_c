/* Program 3 in Chapter 8.

Define a function to convert any given year into it's Roman Numeral equivalent. Use these Roman
equivalents for decimal numbers: 1 - I, 5 - V, 10 - X, 50 - L, 100 - C, 500 - D, 1000 - M.

Example:
Roman equivalent of 1988 is mdcccclxxxviii
Roman equivalent of 1525 is mdxxv*/

/*Convert given year into it's Roman equivalent*/

#include <stdio.h>

int romanise(int, int, char);

int main() {

     int yr;
     printf("\nEnter year: ");
     scanf("%d", &yr);

     yr = romanise(yr, 1000, 'M');
     yr = romanise(yr, 500, 'D');
     yr = romanise(yr, 100, 'C');
     yr = romanise(yr, 50, 'L');
     yr = romanise(yr, 10, 'X');
     yr = romanise(yr, 5, 'V');
     romanise(yr, 1, 'I');

     return 0;
}

int romanise(int y, int k, char ch) {

     int i, j;
     j = y/k;
     for (i=1; i<=j; i++)
          printf("%c", ch);

     return(y % k);
}

/*Output:
Enter year: 1988
MDCCCCLXXXVIII*/