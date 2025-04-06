/*Example in Chapter 8 explaining how functions can be created, declared and called.
Sending and receiving values between functions.*/

#include <stdio.h>

int calsum(int x, int y, int z); //Function declaration
//Could also just write calsum(int, int, int).Don't need to use variable names

int main(){
    
     int a, b, c, sum;

     printf("Enter any three numbers: ");
     scanf("%d %d %d", &a, &b, &c);

     sum = calsum(a, b, c); //Function call
     printf("The sum of the three numbers you entered, %d, %d and %d, is %d\n", a, b, c, sum);
     return 0;
}

int calsum(int x, int y, int z){ //Function defenition

     int d;
     d = x + y + z;
     return(d); //We want to return a value back to the program, so a return statement is necessary.
     //Parentheses after the return statement are optional.
     //A function can only return 1 value at a time.
}

/*Output:
Enter any three numbers: 9 3 5
The sum of the three numbers you entered, 9, 3 and 5, is 17*/