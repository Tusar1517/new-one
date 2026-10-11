Write a c programing to print numbers from 1 to 100 using for loop and while loop.
  ANSWER:
#include <stdio.h>

int main() {
    int i;

    // Using for loop
    for (i = 1; i <= 100; i++) {
        printf("%d ", i);
    }

    printf("\n");

    // Using while loop
    i = 1;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }

    return 0;
}
