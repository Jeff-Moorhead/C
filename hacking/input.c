#include <stdio.h>
#include <string.h>

int main() {
    char name[20];

    printf("What is your name? ");
    scanf("%s", name); // scanf expects a pointer as input

    printf("Hello %s!\n", name);
    return 0;
}
