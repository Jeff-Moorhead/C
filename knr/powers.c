#include <stdio.h>

int power(int base, int n) {
    int p;

    for (p = 1; n > 0; --n) {
        p = p * base;
    }
    return p;
}

// Functions allow you to ignore HOW a job is done. You can focus on what is done.
// In C, all function parameters are passed by value (functions receive a copy, not the original)
int main() {
    int i;

    for (i = 0; i < 10; ++i) {
        printf("%d %d %d\n", i, power(2, i), power(-3, i));
    }
    return 0;
}
