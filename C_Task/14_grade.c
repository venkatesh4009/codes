#include <stdio.h>

int main() {
    // Declare variables
    float marks[5];
    float total = 0, average,per_val;
    
    printf("enter marks out of 100\n");
    // Take user input for 5 marks
    for (int i = 0; i < 5; ++i) {
        printf("Enter mark %d: ", i + 1);
        scanf("%f", &marks[i]);

        // Add the mark to the total
        total += marks[i];
    }

    // Calculate the average
    average = total / 5;

    // Display the average
    printf("Average mark: %.2f\n", average);
    
    per_val=(total/500)*100;
    
    if(per_val>80){
        printf("grade A");
    }else if(per_val>60){
        printf("grade B");
    }else if(per_val>40){
        printf("grade C");
    }else{
        printf("grade D");
    }
    
   
    return 0;
}

