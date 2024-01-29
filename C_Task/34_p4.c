#include <stdio.h>

int main() {
    int row=1,rowcount=5, bcount, spcount;
    
    while(row<=6){
        for (spcount = 1; spcount < row; spcount++) {
            printf(" ");
        }
        for(bcount=1; bcount<=rowcount; bcount++){
            printf("B");
        }
        rowcount--;
        row++;
        printf("\n");
        
    }
    

    return 0;
}
