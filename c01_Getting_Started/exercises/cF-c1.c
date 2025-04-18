/* Question --> (c), [F], Chapter 1 */
/* Attempt the question */

/* Paper of size A0 has dimensions 1189 mm x 841 mm. Each subsequent
size A(n) is defined as A(n-1) cut in half, parallel to its shorter
sides. Thus, paper of size A1 would have dimensions 841 mm x 594 mm.
Write a program to calculate a print paper sizes A0, A1, A2, ..., A8. */

# include <stdio.h>

int main() {

     int side_a, side_b;

     side_a = 1189;
     side_b = 841;

     for (int i = 0; i <= 8; i++) {

          if (side_a > side_b) {
               printf("A%d = %d mm x %d mm\n", i, side_a, side_b);

          } else {
               printf("A%d = %d mm x %d mm\n", i, side_b, side_a);

          }

          if (side_a > side_b) {
               side_a = side_a / 2;

          } else {
               side_b = side_b / 2;

          }
     }

     return 0;
}