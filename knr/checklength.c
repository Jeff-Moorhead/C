#include <stdio.h>
#define PRINTTHRESHOLD 80
#define MAXLENGTH 1000

int getnextline(char s[], int limit) {
    int c, i;

    for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }

    if (c == '\n') {
        s[i] == c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

int main() {
    int len;
    char line[MAXLENGTH];
    while ((len = getnextline(line, MAXLENGTH))) {
        if (len >= PRINTTHRESHOLD) {
            printf("Line length: %d\n", len);
            printf("Line: %s\n", line);
        }
    }
    return 0;
}