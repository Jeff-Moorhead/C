#include <stdio.h>

int main() {
    char c = 'a';
    int i = 97;

    int equal = (c == i); // should be 1 for true, 0 for false
    printf("%d\n", equal);
}