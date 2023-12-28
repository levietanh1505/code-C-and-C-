// vẽ cây thông 
#include <stdio.h>

int main (){
    int n;
    scanf ("%d", &n);

    for (int i = 0; i < 2 * n + 2; i ++){
        for (int j = 0; j < 2 * n + 1; j ++){
            if (i <= n){
                if (j <= n + i && j >= n - i) printf ("*");
                else printf (" ");
            }

            else if (i <= n + n) {
                if (j == n) printf ("+");
                else printf (" ");
            }

            else if (i == 2 * n + 1) printf ("-");
        }

        printf ("\n");
    }
}