#include <stdio.h>

/* Count digits, white space, others */
int main() {
    int c, i, nwhite, nother;

    // There are 10 digits, so we need an array 10 long
    int ndigit[10];

    nwhite = nother = 0;
    for (i = 0; i < 10; ++i) {
        ndigit[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            // chars are equivalent to ints in arithmetic
            ++ndigit[c-'0']; // e.g. '2' - '0' = 2 (chars are just integers under the hood)
        } else if (c == ' ' || c == '\n' || c == '\t') {
            ++nwhite;
        } else {
            ++nother;
        }
    }

    printf("digits = ");
    for (i = 0; i < 10; ++i) {
        printf(" %d", ndigit[i]);
    }
    printf(", white space = %d, other = %d\n", nwhite, nother);
}
