#include <stdio.h>

#define TAB 8

int getnexttab(int pos, int spaces) {
    int buffer, nexttab;

    if ((buffer = (pos - spaces)) < TAB) {
        nexttab = (TAB - buffer) % TAB;
    } else {
        nexttab = TAB;
    }
    return nexttab;
}

int main() {
    // For example: "hello     world" should print "hellotssworld" (one tab, and two spaces)
    int c, pos, nexttab, spaces, tabs, buffer;

    pos = 0;
    nexttab = TAB;
    spaces = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++spaces;
            ++pos;
        } else {
            // Rewind to the last non-blank character and take nexttab from there
            nexttab = getnexttab(pos, spaces);
            while (spaces > nexttab) {
                putchar('t');
                spaces -= nexttab;
                pos += nexttab;
                nexttab = getnexttab(pos, spaces);
            }

            while (spaces > 0) {
                putchar('s');
                --spaces;
                ++pos;
            }
            putchar(c);
            ++pos;
        }
    }
}