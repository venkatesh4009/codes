#include <stdio.h>

int main() {
    // Write C code here
    int r,count;
    printf("enter range");
    scanf("%d", &r);
    count=1;
    while (count <= r) {
       
            
           printf("%d ", count*5); 
        
        
        count++;
    }

    return 0;
}
