 Description
This C program performs three mathematical operations:

Factorial of a number A

Fibonacci series up to number B

Prime numbers from 1 to number C

It uses process forking (fork()) to demonstrate multi-processing:

The Parent process prints its ID.

The first child calculates the factorial of A.

The second child computes the fibonacci series and lists prime numbers.

 Concepts Demonstrated
Process creation using fork()

Inter-process independence

Basic mathematical operations

Standard I/O and process ID functions

Usage of global variables (though not ideal — see "Notes" below)

 How to Compile and Run
 Compile:
bash
Copy
Edit
gcc multiprocess_math.c -o multiprocess_math
 Run:
bash
Copy
Edit
./multiprocess_math
Example Input:
mathematica
Copy
Edit
Enter number A: 5
Enter number B: 10
Enter number C: 20
💡 Output Example:
txt
Copy
Edit
I'm Parent and ID is 12345 & my Parent's ID is 567
I'm Child B and My Parent ID is 12345
Factorial of 5 is 120
I'm Child C and My Parent ID is 12345
Fibonacci series upto number 10
 0 1 1 2 3 5 8
Prime numbers from 1 to 20
 2 3 5 7 11 13 17 19
⚠️ Notes and Suggestions
Global Variables:

Variables like factorial, a, b, c are global.

Consider using local variables or passing values via parameters for better practice.

Function Return Values:

Factorial(), Fibonacci(), and Prime() are declared as int but do not return anything.

Consider changing them to void or returning meaningful values.

Concurrency Behavior:

Since forked processes are asynchronous, output order may vary slightly between runs.

Output Formatting:

Consider adding newlines (\n) for better readability.