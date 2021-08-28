#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */

int getnextline(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }

    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[]) {
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}

int main() {
    int len; // current line length
    int max; // max length so far
    char line[MAXLINE]; // current input line
    char longest[MAXLINE]; // longest line saved here

    max = 0;
    while ((len = getnextline(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0) {
        printf("The longest line was %d characters long.\n", max);
        printf("The longest line was %s", longest);
    }
    return 0;
}
