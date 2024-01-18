#include <sys/syscall.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/mman.h>


#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <wctype.h>

#define true 1
#define false 0

//All instructions of the program are stored inside the 'Text' segment of the program.
int globalVar = 7;//This variable is stored in the 'Data' segment of the program.

void printInt(int x){
    static int statVar = 2;//This variable is also stored in the 'Data' segment of the program, because it is static. 
    long y = 1;//All, non-static, variables defined inside of any function are stored inside the 'Stack' segment of the program.
    unsigned count = 1;
    while ((y*=10) < x) count++;
    char* output = malloc(sizeof(char) * count);//Heap
    unsigned index = count-1;
    while (x > 0){
        int part1 = (x % 10);
        char z = part1 + 48;
        x /= 10;
        output[index--] = z;
    }
    write(STDOUT_FILENO, output, count * sizeof(char));
}

int main(int argc, char** argv, char** envp){
    unsigned fd = open("./myFile", O_RDONLY);
    char in = 0;
    
    while (read(fd, &in, sizeof(char)) != 0)
    {
        write(STDOUT_FILENO, &in, sizeof(char));
    }
    in = '\n';
    write(STDOUT_FILENO, &in, sizeof(char));
    close(fd);


    char* lit = "Do you wish to fork?";
    write(STDOUT_FILENO, lit, 21);
    char response;
    read(STDIN_FILENO, &response, sizeof(char));
    if((response-48) == true){
        pid_t id = fork();
        if(id != 0){
            printInt(id);
        }else{
            printf("Hi there!");
        }
    }
    return 0;
}
