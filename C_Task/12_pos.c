#include <stdio.h>

int main() {
    int a;
   

    printf("Enter the number:\n");
    scanf("%d", &a);

    
    if(a>0){
        printf("%dis  positive number",a);
    }else{

    printf("%dis negative number",a);
    }
    return 0;
}
