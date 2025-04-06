/*Write a menu driven program which has the following options:
1. Factorial of a number
2. Prime or not
3. Odd or even
4. Exit

Once a menu item is selected the appropriate acrion should be taken and
once this action is finished, the menu should reappear. Unless the user
selects the 'Exit' option the program should continue to work.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
     int choice, num, i, fact;
     
     while (1)
     {
          printf("\n1. Factorial of a number\n");
          printf("2. Prime or not\n");
          printf("3. Odd or even\n");
          printf("4. Exit\n");
          printf("Your choice?: ");

          scanf("%d", &choice);

          switch(choice)
          {
               case 1:
                    printf("\nEnter your number: ");
                    scanf("%d", &num);

                    fact = 1;
                    for (i=1; i<=num; i++)
                         fact = fact * i;
                    printf("%d! = %d\n", num, fact);
                    break;
               

               case 2:
                    printf("\nEnter your number: ");
                    scanf("%d", &num);

                    for (i=2; i<num; i++)
                    {
                         if (num % i == 0)
                         {
                              printf("%d is not a prime number\n", num);
                              break;
                         }
                    }
                    if (i == num)
                         printf("%d is a prime number\n", num);
                    break;
                    
               

               case 3:
                    printf("\nEnter your number: ");
                    scanf("%d", &num);

                    if(num % 2 == 0)
                         printf("%d is an even number\n", num);
                    else
                         printf("%d is an odd number\n", num);
                    break;


               case 4:
                    exit (0); //Terminates program execution (Make sure to #include <stdlib.h>)
               
               default:
                    printf("Error. Please pick an option (1-4)\a\n"); // \a makes a beep sound
          }
     }
     return 0;
}

/*Output:
1. Factorial of a number
2. Prime or not
3. Odd or even
4. Exit
Your choice?: 1

Enter your number: 5
5! = 120

1. Factorial of a number
2. Prime or not
3. Odd or even
4. Exit
Your choice?: 2

Enter your number: 13
13 is a prime number

1. Factorial of a number
2. Prime or not
3. Odd or even
4. Exit
Your choice?: 3

Enter your number: 13
13 is an odd number

1. Factorial of a number
2. Prime or not
3. Odd or even
4. Exit
Your choice?: 5
Error. Please pick an option (1-4)

1. Factorial of a number
2. Prime or not
3. Odd or even
4. Exit
Your choice?: 4
*/