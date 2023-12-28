#include <stdio.h>
#include <stdlib.h>

int main (){
    int T;
    scanf ("%d", &T);

    while (T --){
        int n, k;
        scanf ("%d %d", &n, &k);

        int result = 0;
        int sum1 = n / k;

        if (n % k == 0){
            printf ("%d\n", sum1 * 2 * 5);
        }
        else{
            int du = n - sum1 * k;
            int lan1 = sum1 - 1;
    
                result += lan1 * 10 + 5;

                if (2 * du <= k) result += 10;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
                else result += 3 * 5;

                printf ("%d\n", result);
            }
    }
}