#include <stdio.h>

int main() {
    int length;
    char c;
    length = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == '\t' || c == ' ') {
            for (int i = 1; i <= length; ++i) {
                putchar('*');
            }
            putchar('\n');
            length = 0;
            continue;
        }
        ++length;
    }
}