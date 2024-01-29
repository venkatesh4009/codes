#include <stdio.h>

int main() {
    int a,b;
   

    printf("Enter two numbers:\n");
    scanf("%d%d", &a, &b);

    
    if(a>b){
        printf("%dis the largest",a);
    }else{

    printf("%dis the largest",b);
    }
    return 0;
}
