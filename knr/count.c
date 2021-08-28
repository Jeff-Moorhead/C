#include <stdio.h>

/* Count lines in input */
int main() {
    int c, nl;

    nl = 0;

    /* 
    A character written between signle quotes represents an integer
    value equal to the numerical value of the character in the machine's
    character set, e.g. 'A' is a character constant with value 65 in ASCII,
    '\n' is 10 in ASCII, etc. Single characters are only numbers, whereas
    strings are different (more to come on strings later).
    */
    while ((c = getchar()) != EOF) {
        /*
        if (c == '\n' || c == '\t' || c == ' ') {
            ++nl;
        }
        */
        // copy input to output
        if (c == '\t' || c == '\b' || c == '\\') {
           printf("\\\\\n");
        }
    }
    //printf("There were %d flagged characters.\n", nl);
}