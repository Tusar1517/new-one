#include <stdio.h>

int main() {
    int i;

    // Using for loop
    for (i = 2; i <= 50; i += 2) {
        printf("%d ", i);
    }

    printf("\n");

    // Using while loop
    i = 2;
    while (i <= 50) {
        printf("%d ", i);
        i += 2;
    }

    return 0;
}
