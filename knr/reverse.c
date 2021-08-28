#include <stdio.h>

#define MAXLENGTH 1000

int foobar;

int getnextline(char s[], int limit) {

    int c, i;
    extern int foobar;
    printf("%d\n", foobar);

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

void reverse(char to[], char from[], int length) {
    // Global (external) variables must be made visible to the calling function using the extern keyword
    // If the variable is declared before it is used in a function, extern can be omitted
    // If the variable is declared in one file and used in another, extern is required to make the connection
    extern int foobar;
    foobar = 100;
    printf("%d\n", foobar);

    // Local variables like compliment are also called "automatic" variables
    int compliment = 0;
    for (int i = length - 1; i >= 0; --i) {
        if (from[i] == '\0' || from[i] == '\n') {
            continue;
        }
        to[compliment] = from[i];
        ++compliment;
    }
    to[compliment] = '\0';
}

int main() {

    int len;
    extern int foobar;
    foobar = 500;

    // Strings in C are implemented as arrays of chars
    char line[MAXLENGTH];
    char reversed[MAXLENGTH];

    while ((len = getnextline(line, MAXLENGTH)) > 0) {
        reverse(reversed, line, len);
        printf("Input: %s\n", line);
        printf("Reversed: %s\n", reversed);
    }
}