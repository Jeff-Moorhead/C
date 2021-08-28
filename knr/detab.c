#include <stdio.h>

#define TABCOLS 8

/*
Replace tabs with the proper number of spaces to get to the next tab stop
We assume each tab stop is eight spaces apart
We don't need strings for this, only char functions
*/

int main() {
    int c, nextstop, position;

    position = 1;
    nextstop = TABCOLS;
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            // We need to subtract one to account for the tab itself
            nextstop = TABCOLS - (position - 1) % TABCOLS;
            //printf("%d %d\n", position, nextstop);
            while (nextstop > 0) {
                putchar('*');
                --nextstop;
                ++position;
            }
            nextstop = TABCOLS;
        } else if (c == '\n') {
            position = 1;
            nextstop = TABCOLS;
            putchar('\n');
        } else {
            putchar(c);
            --nextstop;
            ++position;
        }
    }
}
