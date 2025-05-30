---------------------------------
01.c
//First child: slept for 1 seconds
//Second child: slept for 3 seconds
//Parent: Both children have finished

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int status1;

int main(){
    int f1 = fork();
    if(f1 < 0){
        perror("Fork Failed\n");
        exit(1);
    } else if(f1 == 0){
        printf("I'm child 1 process. Parent ID %d\n", getppid());
        printf("Sleeping for 1 second...\n");
        sleep(1);
        printf("Child 1 Exiting.\n");
        exit(0);
    } else {
        wait(&status1);

        int f2 = fork();
        if (f2 == 0){
            printf("I'm child 2 process. Parent ID %d\n", getppid());
            printf("Sleeping for 3 seconds...\n");
            sleep(3);
            printf("Child 2 Exiting\n");
            exit(0);
        } else {
            printf("I'm parent process.ID %d\n", getpid());
            int status2;
            wait(&status2);

            if(WIFEXITED(status1)){
                printf("Child 1  exited with status %d\n", WEXITSTATUS(status1));
            } else {
                printf("Child 1 did not exit normally\n");
            }

            if(WIFEXITED(status2)){
                printf("Child 2 exited with status %d\n", WEXITSTATUS(status2));
            } else {
                printf("Child 2 did not exit normally\n");
            }
            printf("Parent process exiting.\n");
        }
    }
    return 0;
}

---------------------------------
02.c
//First child: sleeps for 2 seconds, exit with status 2
//Second child: sleeps for 1 second, exit with status 1.
//Parent: waits twice, and prints which child (by PID or exit code) finished first and second




---------------------------------
03.c
//The parent creates a child process
//The child creates a grandchild process
//The grandchild sleeps for 2 seconds and exits with status 2
//The child waits for the grandchild, prints its exit status, then exits with status 55