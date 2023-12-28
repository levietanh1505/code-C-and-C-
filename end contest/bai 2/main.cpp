#include <stdio.h>
#include <stdlib.h>

int main (){
    int n;
    scanf ("%d", &n);

    for (int i = n - 1; i >= 1 - n; i  --){
        for (int j = 1 - n; j <= n - 1; j ++){
            if (j + i - n + 1 <= 0 && j + i + n - 1 >= 0 && j - i + n - 1 >= 0 && j - i - n + 1 <=0 ){
                printf ("%d", n - (abs(i) + abs (j)));
            }
            else printf (" ");
        }
        printf ("\n");
    }
}