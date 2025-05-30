#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>

int num;

int main(){
    int f1 = fork()
    if( f1 < 0){
        printf("Fork failed");
        exit(0);
    } else if(f1 == 0){

    } else {
        printf("I'm parent process\n");
        printf("Enter number: ");
        scanf("%d", &num);
    }
}