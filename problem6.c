#include <stdio.h>

int main() {
    int i;

    // Using for loop
    printf("Using for loop:\n");
    for (i = 1; i <= 10; i++) {
        printf("5 x %d = %d\n", i, 5 * i);
    }

    // Using while loop
    printf("Using while loop:\n");
    i = 1;
    while (i <= 10) {
        printf("5 x %d = %d\n", i, 5 * i);
        i++;
    }

    return 0;
}
