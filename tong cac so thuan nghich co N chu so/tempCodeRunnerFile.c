#include <stdio.h>
#include <math.h>

int main (){
    int T;
    scanf ("%d", &T);

    while (T --){
        int N, sum = 0;
        scanf ("%d", &N);

        if (N % 2 == 0){
            int n = N / 2;
            int left = pow (10, n - 1);
            int right = pow (10, n) - 1;

            for (int i = left; i <= right; i ++){
                int tempnum = i;
                int result = i;

                while (tempnum > 0){
                    result = result * 10 + tempnum % 10;
                    tempnum /= 10;
                }

                sum += result;
            }
        }
        else {
            int n = N / 2 + 1;
            int left = pow (10, n - 1);
            int right = pow (10, n) - 1;

            for (int i = left; i <= right; i ++){
                int tempnum = i / 10;
                int result = i;

                while (tempnum > 0){
                    result = result * 10 + tempnum % 10;
                    tempnum /= 10;
                }

                sum += result;
            }
        }

        printf ("%d", sum);
    }
}