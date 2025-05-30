🧾 Description
This collection of C programs demonstrates fundamental concepts of process control using fork(), sleep(), exit(), and wait() in a Unix-like environment. Each program focuses on different aspects of process creation, delays, and synchronization between parent and child processes.

📄 File Descriptions
01.c – Basic Sleep and Exit
Purpose:
Simple demonstration of using sleep() to delay program execution and exit() to terminate.

Behavior:

Prints a start message.

Sleeps for 3 seconds.

Exits the program.

Sample Output:

sql
Copy
Edit
Program Started.
Sleeping for 3 second
Exiting the program
02.c – Parent Waiting for Child
Purpose:
Illustrates how a parent process waits for a child process using wait(). Also checks the child’s exit status.

Behavior:

Parent creates one child process.

Child sleeps for 2 seconds, then exits.

Parent waits for child to finish and prints exit status.

Key Concepts: fork(), wait(), WIFEXITED(), WEXITSTATUS()

Sample Output:

arduino
Copy
Edit
Parent process started. pid: 1234
Child process. pid: 1235, sleeping for 2 seconds...
Parent process waiting for child process to finish
Child process Exiting
Child Exit with status: 0
Parent Process Ending.
03.c – Two Children with Different Sleep Times
Purpose:
Shows how a parent process creates two child processes, each with different execution delays, and waits for both to finish using waitpid().

Behavior:

First child sleeps for 1 second.

Second child sleeps for 3 seconds.

Parent waits for both children to exit and reports their statuses.

Issues Noted:

pid2 is used but not assigned via a second fork(). (Needs fixing)

Both children appear to be labeled "Child one". Consider renaming for clarity.

Corrected Snippet Suggestion:

c
Copy
Edit
pid_t pid2 = fork();
Key Concepts: fork(), sleep(), waitpid(), getpid(), exit()

Sample Output (after fixing):

yaml
Copy
Edit
Parent process started. My id: 1234
Child one. Parent ID: 1235, Sleeping for 1 sec
Child two. Parent ID: 1236, Sleeping for 3 sec
Exiting:
Exiting:
Parent Process wait for finish child process:
Child 1 exited with status: 0
Child 2 exited with status: 0
Parent Process Ending.
🔧 Compilation & Execution
🛠️ Compile:
bash
Copy
Edit
gcc 01.c -o sleep_exit
gcc 02.c -o wait_example
gcc 03.c -o multi_child