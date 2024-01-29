#include <stdio.h>

int main() {
    int n,num, rev = 0;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    n=num;

    // Reverse the number
    while (n != 0) {
       
        rev = rev * 10 + n % 10;
        n /= 10;
    }

   
    if (num == rev) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}

