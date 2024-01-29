#include <stdio.h>

int main() {
    // Declare variables
    int current[6];

    int sumentering, sumleaving;
    
    for (int i = 0; i < 6; ++i) {
        printf("Enter current value i %d: ", i+1);
        scanf("%d", &current[i]);

        
    }

   sumentering= current[0]+current[1]+current[3]+current[4];
   sumleaving= current[2]+current[5];
   
   
   if(sumentering==sumleaving){
       printf("kirchoffs law satisfied");
       
   }else {
       printf("kirchoffs law not satisfied");
   }


   
    return 0;
}
