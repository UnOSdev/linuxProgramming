#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/mman.h>//Contains the mapping functions.


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

enum ANSI_CHARS {
     NUL = 0,  SOH = 1,     STX = 2,
     ETX = 3,  EOT = 4,     ENQ = 5,
     ACK = 6,  BEL = 7,      BS = 8,
     TAB = 9,  LF = 10,     VT = 11,
     FF = 12,  CR = 13,     SO = 14,
     SI = 15, DEL = 16,    DC1 = 17,
    DC2 = 18, DC3 = 19,    DC4 = 20,
    NAK = 21, SYN = 22,    ETB = 23,
    CAN = 24,  EM = 25,    SUB = 26,
    ESC = 27,  FS = 28,     GS = 29,
     RS = 30,  US = 31,  Space = 32,
    EXM = 33, DQM = 34,    SQM = 35,
     NS = 36,  MS = 37,     PS = 38,
    

};

int main(int argc, char** argv, char** envp){
    
    return 0;
}
