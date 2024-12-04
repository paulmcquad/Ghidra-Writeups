#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void usage(char *pass) {
    printf("USAGE: %s <password>\n", pass);
    puts("try again!");
    exit(0);
}


int main(int argc, char *argv[]) {
    /* Must be 2 arguments passed */
    if(argc != 2) {
        usage(argv[0]);
    }

    /* Must be 10 characters in length */
    if(strlen(argv[1]) != 10) {
        usage(argv[0]);
    }

    /* If the password has a '@' as the fifth character */
    if(argv[1][4] == '@') {
        puts("Nice Job!!");
        printf("flag{%s}\n", argv[1]);
    }
    else {
        usage(argv[0]);
    }

    return 0;
}