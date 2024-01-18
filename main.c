#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/mman.h>//Contains the mapping functions.


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char** argv, char** envp){
    unsigned index = 0;
    int response = 0;
RESTART:
    index = 0;
    while (envp[index] != NULL)
    {
        printf("%s\n", envp[index++]);
    }
    
    printf("Wish to fork?(1/0): ");
    scanf("%i", &response);
    if(response){
        fork();
        
        goto RESTART;
    }
    return 0;
}
