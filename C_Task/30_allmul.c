#include <stdio.h>

int main() {
    // Write C code here
    for (int num = 2; num <= 10; ++num) {
        for (int count = 1; count <= 10; ++count) {
            printf("%d * %d = %d\n", num, count, num * count);
        }
        printf("\n"); // Add a newline after each table
    }

    return 0;
}
