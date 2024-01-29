#include <stdio.h>

int main() {
    // Write C code here
    int r, arr[100], i;
    printf("Enter range: ");
    scanf("%d", &r);

    arr[0] = 2;
    arr[1] = 4;

    for (i = 2; i < r; i++) {
        if (i % 2 == 0) {
            arr[i] = arr[i - 2] + 2;
        } else {
            arr[i] = arr[i - 1] * 2;
        }
    }

    for (i = 0; i < r; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

