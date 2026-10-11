#include <stdio.h>

int main() {
    int i;

    // Using for loop
    for (i = 1; i <= 50; i += 2) {
        printf("%d ", i);
    }

    printf("\n");

    // Using while loop
    i = 1;
    while (i <= 50) {
        printf("%d ", i);
        i += 2;
    }

    return 0;
}
