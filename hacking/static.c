#include <stdio.h>

void function() {
    static int var = 5; // static variables retain their value across function calls
    printf("\t[IN FUNCTION]: var @ %p = %d\n", &var, var);
    var++;
}

int main() {
    static int var = 1337; // a different var, still static
    
    for (int i=0; i<5; i++) {
	printf("[IN MAIN]: var @ %p = %d\n", &var, var);
	function(); // 5, 6, 7, 8, 9
    }
}
