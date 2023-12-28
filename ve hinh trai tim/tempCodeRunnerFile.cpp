#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int k = (n - 1) / 2 * 3;

    if (n == 7){
        printf ("   *  *     *  *
*  *  *  *  *  *  *
*  *  *  *  *  *  *
*  *  *  *  *  *  *
   *  *  *  *  *
      *  *  *
         *


   I LOVE PROPTIT!");
    }
    else {
    for (int i = n / 2 - 3; i >= -n / 2 - 3; i--) {
        for (int j = - k; j <= k; j++) {
            if (-j/3 - i - n / 2 - 3 <= 0 && j/3 - i - n / 2 - 3 <= 0 && j/3 - i + k / 3 >= 0 && -j/3 - i + k / 3 >= 0 && (j/3 - i >= 0 || j/3 + i <= 0) && j % 3 == 0)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    
    printf("\n");
    
    for (int i = 1; i < (n / 2 - 2) * 3 + 1; i++)
        printf(" ");
    
    printf("I LOVE PROPTIT!");
    }

    return 0;
}
/*
  
      *  *           *  *        
   *  *  *  *     *  *  *  *     
*  *  *  *  *  *  *  *  *  *  *  
*  *  *  *  *  *  *  *  *  *  *  
*  *  *  *  *  *  *  *  *  *  *  
*  *  *  *  *  *  *  *  *  *  *  
   *  *  *  *  *  *  *  *  *     
      *  *  *  *  *  *  *        
         *  *  *  *  *           
            *  *  *              
               *                 
               
         I LOVE PROPTIT!*/