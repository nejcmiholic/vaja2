#include <stdio.h>

#define MSG "Hello, world!\n"

void print() { // print function
    printf(MSG);
}

int main() { // main function
    #ifdef DEBUG
    printf("Debug message\n");
    #endif

    print();

    return 0;
}