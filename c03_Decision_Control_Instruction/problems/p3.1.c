//Calculate proft or loss

/* If cost price and selling price of an item is input through the keyboard,
write a program to determine whether the seller has made profit or incurred loss.
Also determine how much profit he made or loss he incurred.*/

#include <stdio.h>

int main() {
     float cp, sp, p, l; //cost price, selling price, profit, loss
     printf("\nEnter the cost price and the selling price: ");
     scanf("%f %f", &cp, &sp);

     p = sp - cp;
     l = cp - sp;

     if (p > 0)
          printf("The seller made a profit of $%.2f\n", p);
     if (l > 0)
          printf("The seller incurred a loss of $%.2f\n", l);
     if (p == 0)
          printf("There is no profit nor loss\n");

     return 0;
}