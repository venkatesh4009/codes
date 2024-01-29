#include <stdio.h>

int main() {
   
    int row = 1, rowcount = 10, spcount, acount, bcount;  // Declare spcount, acount, and bcount

    while (row <= 6) {
        for (spcount = 1; spcount < row; spcount++) {
            printf(" ");
        }

        for (acount = 0; acount <= (rowcount / 2); acount++) {
            printf("A");  
        }

        for (bcount = 0; bcount <= (rowcount / 2); bcount++) {
            printf("B");  
        }

        printf("\n");  

        rowcount = rowcount - 2;
        row = row + 1;
    }

    return 0;
}


