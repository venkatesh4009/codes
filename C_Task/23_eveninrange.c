#include <stdio.h>

int main() {
    // Write C code here
    int n1,n2,n;
    printf("enter the range");
    scanf("%d%d", &n1,&n2);
    n=n1;
    while(n<n2){
        if(n%2==0){
         printf("%d,",n);   
        }
        
       n++;
    }

    return 0;
}
