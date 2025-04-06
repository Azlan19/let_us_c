/* The first example of Chapter 7. Displaying the functionality of the 'switch' function*/

# include <stdio.h>

int main()
{
     int i = 2;
     switch(i)
     {
          case 1:
               printf("I am in case 1\n");
          case 2:   //Since i = 2, it matches with this case (2)
               printf("I am in case 2\n");
          case 3:
               printf("I am in case 3\n");
          default:
               printf("I am in the default case\n");
     }
     return 0;
}

/*Output:
I am in case 2
I am in case 3
I am in the default case

This happens because once the matching case is found (i=2 to case 2:), all the statements
in the cases after that are executed as well, including the default case.*/

//In the scenario you only want the matching case to execute, just use the "break" statement
