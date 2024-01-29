#include <stdio.h>

int main() {
   
    int row = 5, rowcount = 2, spcount, acount, bcount;  // Declare spcount, acount, and bcount

    while (row >0) {
        for (spcount = 0; spcount <row; spcount++) {
            printf(" ");
        }

        for (acount = 1; acount <= (rowcount / 2); acount++) {
            printf("A");  
        }

        for (bcount = 1; bcount <= (rowcount / 2); bcount++) {
            printf("B");  
        }

        printf("\n");  

        rowcount = rowcount + 2;
        row--;
    }

    return 0;
}


