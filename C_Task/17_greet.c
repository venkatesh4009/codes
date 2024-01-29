#include <stdio.h>

int main() {
    // Write C code here
    int age;
    printf("enter the age");
    scanf("%d", &age);
    if(age<5){
       printf("nice kid"); 
    }else if(age<=10){
        printf("nice child"); 
    }else if(age<=15){
        printf("teenage"); 
    }else if(age<=25){
        printf("young age"); 
    }else if(age<=50){
        printf("middle age"); 
    }else {
        printf("old age");
    }

    return 0;
}
