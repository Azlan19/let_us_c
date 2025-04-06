/* The second example of Chapter 7. Displaying the functionality of the 'goto' function*/

#include <stdio.h>
#include <stdlib.h> //For the exit() function

int main()
{
     int goals;
     printf("How many goals did India concede?: ");
     scanf("%d",&goals);

     if (goals <= 5)
          goto this; //'this' is a keyword and can be changed
     else
     {
          printf("India are washed damn...\n");
          printf("India should spend more time coding in C\n");
          exit(1); //This terminates the program execution
     }

     this: printf("That's good! Indian progress :)\n"); //printf function can also be written under "this" and indented 
     return 0; 
}

/*Output:
How many goals did India concede?: 4
That's good! Indian progress :)

How many goals did India concede?: 7
India are washed damn...
India should spend more time coding in C
*/