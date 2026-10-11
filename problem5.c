#include <stdio.h>

int main() {
    int i, sum = 0;

    // Using for loop
    for (i = 1; i <= 100; i++) {
        sum += i;
    }
    printf("Sum using for loop = %d\n", sum);

    // Using while loop
    i = 1;
    sum = 0;
    while (i <= 100) {
        sum += i;
        i++;
    }
    printf("Sum using while loop = %d\n", sum);

    return 0;
}
