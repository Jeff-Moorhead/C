#include <stdio.h>

#define CHAROFFSET 10
#define NUMCHARS 36

int main() {

    char c;
    int freqs[NUMCHARS]; // Assume only English characters and numbers
    char chars[NUMCHARS];

    for (int i = 0; i < NUMCHARS; ++i) {
        freqs[i] = 0;
    }

    for (int i = 0; i < 10; ++i) {
        chars[i] = i;
    }

    for (char i = 'a'; i <= 'z'; ++i) {
        chars[i-'a'+CHAROFFSET] = i;
    }

    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == '\t' || c == ' ') {
            continue;
        } else if (c >= '0' && c <= '9') {
            ++freqs[c - '0'];
        } else if (c >= 'a' && c <= 'z') {
            ++freqs[c - 'a' + CHAROFFSET];
        } else {
            continue; // Skip non alphanumeric characters
        }
    }

    for (int i = 0; i < NUMCHARS; ++i) {
        int freq = freqs[i];
        if (freq == 0) {
            continue;
        }

        printf("%c: ", chars[i]);
        for (int j = 0; j < freq; ++j) {
            putchar('*');
        }

        putchar('\n');
    }
    putchar('\n');
}