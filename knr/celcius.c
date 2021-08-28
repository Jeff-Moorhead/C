#include <stdio.h>

// These are symbolic constants. They are NOT variables. They are simply expanded out into the replacement text or number
#define LOWER 0
#define UPPER 300
#define STEP 20

float celcius(int fahrenheit) {
    return (5.0/9.0) * (fahrenheit - 32.0);
}

int main() {

    int fahr;
    float celc;

    for (fahr = LOWER; fahr <= UPPER; fahr += STEP) {
        celc = celcius(fahr);

        // d is for ints, f is for floats
        printf("%3d\t%6.1f\n", fahr, celc);
    }
    putchar('\n');  // Only prints one character at a time
    printf("Enter a character: ");
    char c = getchar();  // Takes a char from stdin (or at least that's how this program behaves)
    printf("You entered: '%c'\n", c);  // %c means character
}
