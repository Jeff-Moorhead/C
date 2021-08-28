#include <stdio.h>

#define IN 1    /* Inside a word */
#define OUT 0   /* Outside a word */

/* This is a barebones implementation of `wc` (shell command) */
int main() {
    int c, lines, words, chars, state;

    state = OUT;
    lines = words = chars = 0;
    while ((c = getchar()) != EOF) { // EOF defined as -1 in stdio.h
        // getchar reads one character from the stdin buffer at a time
        // It doesn't read anything until a new line (\n) is entered
        ++chars; // new char found
        if (c == '\n') {
            ++lines; // new line found
        }
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            ++words; // new word found
        }
    }
    printf("%d lines, %d words, %d characters\n", lines, words, chars);
}