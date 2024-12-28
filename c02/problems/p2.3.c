//Smallest number of notes to pay

/* Consider a currency system in which there are notes of 6 denominations,
namely, Re. 1, Re. 2, Re. 5, Re. 10, Re. 50, Re. 100. If a sum of Rs. N is
entered through the keyboard, write a program to compute the smallest number
of notes that will combine to give Rs.N */

#include <stdio.h>

int main() {
     int amount, n100, n50, n10, n5, n2, n1, total;
     
     printf("\nEnter the cash amount: ");
     scanf("%d", &amount);

     n100 = amount / 100;
     amount = amount % 100;

     n50 = amount / 50;
     amount = amount % 50;

     n10 = amount / 10;
     amount = amount % 10;

     n5 = amount / 5;
     amount = amount % 5;

     n2 = amount / 2;
     amount = amount % 2;

     n1 = amount / 1;
     amount = amount % 1;

     total = n100 + n50 + n10 + n5 + n2 + n1;

     printf("The smallest number of notes to pay $%d is %d\n",n100 * 100 + n50 * 50 + n10 * 10 + n5 * 5 + n2 * 2 + n1 * 1, total);

     return 0; 
}