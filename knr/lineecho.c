#include <stdio.h>

/* Prints input one word per line */
int main() {
    int c;

    // Reads from stdin buffer stream, which is terminated by \n
    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == '\t' || c == ' ') {
            putchar('\n');
        } else {
            putchar(c);
        }
    }
}