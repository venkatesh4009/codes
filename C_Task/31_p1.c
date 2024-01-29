#include <stdio.h>
int main() 
{
    int row = 1;
    while (row <= 5) 
    {
     for (int column = 1; column <= 5; column++) 
     {
    	 printf("* ");
     }
     printf("\n");
     row++;
    }

 return 0;   
}
