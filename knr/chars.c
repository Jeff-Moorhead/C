#include <stdio.h>

/*
// Print the value of EOF
int main() {
    int c = getchar();  // Chars are only 1 byte. Ints are 4.
    int sizec = sizeof(c);  // 4 bytes for int, 1 byte for char
    printf("%d\n", sizec);
    printf("%d\n", EOF);  // Prints -1 (Too big to be a char value so we know -1 is not valid data coming in. However, the LITERAL -1 is still valid).

    // Because 1 is just 0001 in binary, -1 is found by taking the two's compliment (invert bits and add 1).
    // So -1 is 1110 + 1 = 1111 = ff.
    printf("%x\n", EOF);  // ffffffff, or 11111111 11111111 11111111 11111111 in binary

    int size = sizeof(EOF);  // 4 bytes
    printf("%d\n", size);
}

int main() {
    int c;

    // More concise way to check value after assignment (like the walrus operator)
    while (c = (getchar() != EOF)) {
        if (c == 0 || c == 1) {
            printf("%d\n", c);
        }
    }
}
*/

int main() {
    // Note that char is an int type in C, but chars are only 1 byte long. In order
    // to accept EOF from getchar(), we must declare c as an int.
    int c;

    // By default stdin is line-buffered with an interactive device (like a keyboard).
    // This means the program sees no input at all until a complete line is ready to
    // be taken in.
    c = getchar();

    // EOF is a symbolic constant (defined with #define) that stores an int value too big to be any character
    while (c != EOF) {  // getchar returns EOF (defined as -1) when no more data is coming (this is CTRL + D on Linux)
        putchar(c);
        c = getchar();
    }
}