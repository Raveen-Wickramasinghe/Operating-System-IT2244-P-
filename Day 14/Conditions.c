01.c
//if else condition
if(condition){
    //statement;
} else {
    //statement
}

//Enter your age and verify whether you are eligible or not for election voting using if else
#include <stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%i", &age);
    if( age >= 18){
        printf("\nYou are eligible for voting\n");
    } else if( age < 0) {
        printf("\nInvalid age\n");
    } else {
        printf("\nYou are not eligible for voting\n");
    }
    return 0;
}

-------------------------
02.c
//Ternary Operator
//condition? expression1 : express2;
#include <stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%i", &age);
    (age > = 18)? printf("You can vote") : printf("You cannot vote");
    return 0;
}

-------------------------
03.c
//switch case
//input: Enter the number between 1 to 7: 1
//output: Today is sunday!

#include <stdio.h>
int main(){
    int number;
    printf("Enter the number between 1 to 7: ");
    scanf("%i", &number);
    switch(number){
        case 1:
        printf("\nToday is Sunday!\n");
        break;

        case 2:
        printf("\nToday is Monday!\n");
        break;

        case 3:
        printf("\nToday is Tuesday!\n");
        break;

        case 4:
        printf("\nToday is Wednesday!\n");
        break;

        case 5:
        printf("\nToday is Thursday!\n");
        break;

        case 6:
        printf("\nToday is Friday!\n");
        break;

        case 7:
        printf("\nToday is Saturday!\n");
        break;

        default:
        printf("\nInvalid Number.Choose from (1-7)\n");
    }
    return 0;
}

-------------------------
04.c

/*Write a code for small astrology based on your life path number for that get date of birth from user then calculate life path number.(use switch case)
Example
Calculation for life path number:
     a = date % 10
     b = date / 10
     c = a + b

     if life path number
         1:Lucky
         2:Carefully do your work
         3.Storger
         4.Happy 
         5.Can get help
         6.Doubt
         7.Sad
         8.Like
         9.Courage */

#include <stdio.h>
int main(){
    int date;
    printf("Enter date (1-31): ");
    scanf("%i", &date);

    if(date > 0 && date <= 31){
        int a = date % 10;
        int b = date / 10;
        int c = a + b;

        switch(c){
            case 1:
            printf("\nLucky\n");
            break;
    
            case 2:
            printf("\nCarefully do your work\n");
            break;
    
            case 3:
            printf("\nStorger\n");
            break;
    
            case 4:
            printf("\nHappy\n");
            break;
    
            case 5:
            printf("\nCan get help\n");
            break;
    
            case 6:
            printf("\nDoubt\n");
            break;
    
            case 7:
            printf("\nSad\n");
            break;
    
            case 8:
            printf("\nLike\n");
            break;
    
            case 9:
            printf("\nCourage\n");
            break;
    
            default:
            printf("\nOther\n");
        }
    } else {
        printf("\nEnter a date between (1-31)");
    }
    return 0;
}

-------------------------
05.c
//fibonacci series
#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Fibonacci series up to %d:\n", n);

    while (a <= n) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}

-------------------------
06.c
//Factorial series
#include <stdio.h>
int main(){
    int number;
    int factorial = 1;
    printf("\nEnter a positive number: ");
    scanf("%d", &number);

    if(number > 0){
        for(int a = 1; a <= number; a++){
            factorial = factorial * a;
        } 

        printf("Factorial of %d is %d \n", number, factorial);

    } else {
        printf("\nEntered number is negative\n");
    }
     
    return 0;
}

-------------------------
07.c
//Accept two strings as input from the  user. Concatenates the two strings displays the 
// concatenated result

#include <stdio.h>
#include <string.h>
int main(){
    char str1[100], str2[100];
    printf("Enter string 1: ");
    scanf("%s", str1);
    printf("Enter string 2: ");
    scanf("%s", str2);

    strcat(str1, str2);
    printf("Concatenated string %s\n", str1);

    return 0;
}

-------------------------
08.c
//Take a binary(as an integer) as input and converts it to its decimal equivalent
#include <stdio.h>

int main() {
    int binary, decimal = 0, base = 1, remainder;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary > 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        binary /= 10;
        base *= 2;
    }

    printf("Decimal: %d\n", decimal);

    return 0;
}
 
-------------------------
09.c
//Write a c program that
//Accepts an array of integers from the user
//Find and displays the maximum and minimum values in the array


10.c
//C program to generate pascal's Triangle
//No of rows = 5



/* 
     ###############if else 
if(condition){
  //body of if statment;
}
else{
  //body of else statment;
}
Example: Enter your age and verify your aligible or not for election voting 
using if else condition .


#########Ternary operator
test_condition ? expression1 : expression2;

####switch operator
switch(variable/expression){
   case 1:
     //body of case 1
     break;
   case 2:
     //body of case 2
     break;

   case n:
     //body of case n
     break;

  default:
    // body of default
   }
Example 1: Enter the value between 1 to 7 and create a program for following output:
Enter the number between 1 to 7 : 1
Today is Sunday!

Example 2:
write a code for small astrology based on your life path number for that  get date of birth 
from user then calculate life path number.(use switch case)
output:
     case 1-Date: 23
	 case 2-Date: 29

     calculation for life path number:                    
			  a=date%10     3                                
			  b=date/10     2
			  c=a+b         5
	  if life path number :
			  1:Lucky
			  2:Carefuly do your work
			  3:Storger
			  4:Happy
			  5:Can get help
			  6:Doubt
			  7:Sad 
			  8:Like
			  9:Courage

Example 3:
Give list of numbers then calculate the summation and multiplication using for loop.
 Example:-
    1 2 3 4 5                             
	summation = 15                         
    multiplication =120
	
Example 4:
Print the integers from 1  to 10 using while loop.

EXAMPLE 5:
Write a C program to generate and print the Fibonacci series up to a specified 
number of terms. The program should take the number of terms as input from the 
user and then display the corresponding Fibonacci sequence.

EXAMPLE 6:
Write a C program to calculate the factorial of a given non-negative integer.

Example 7:
Write a C program that:
Accepts two strings as input from the user.
Concatenates the two strings Displays the concatenated result.

Example 8:
Write a C program that takes a binary number (as an integer) as input and 
converts it to its decimal equivalent.

Example 9:
Write a C program that:
Accepts an array of integers from the user.
Finds and displays the maximum and minimum values in the array.

Example 10:
C program to generate Pascal's Triangle.

Output:
no of rows =5
          1
        1   1
      1   2   1
    1   3   3   1
  1   4   6   4   1


*/