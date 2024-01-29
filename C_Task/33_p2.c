#include <stdio.h>

int main() {
    int rowcount=5, acount;
    
    while(rowcount>0){
        for(acount=1; acount<=rowcount; acount++){
            printf("A");
        }
        rowcount--;
        printf("\n");
        
    }
    

    return 0;
}
