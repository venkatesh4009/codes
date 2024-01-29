#include <stdio.h>

int main() {
    int num, isPrime = 1;


    printf("Enter a number above 2: ");
    scanf("%d", &num);

   
        for (int i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                isPrime = 0; 
                break;
            }
        }
    

    
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
