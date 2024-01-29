#include <stdio.h>

int main() {
    int n, n1 = 0, n2 = 1, n3;

    
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    
    printf("Fibonacci Series: ");

    for (int i = 0; i < n; ++i) {
        printf("%d, ", n1);

        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }

    printf("\n");

    return 0;
}

