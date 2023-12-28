// tính tổng các số thuận nghịch có N chữ số N <= 11 nên dùng long long để tránh bị tràn số
#include <stdio.h>
#include <math.h>

int main (){
    int T;
    scanf ("%d", &T);

    while (T --){
        long long N, sum = 0;
        scanf ("%lld", &N);

        if (N % 2 == 0){
            int n = N / 2;
            long long left = pow (10, n - 1);
            long long right = pow (10, n) - 1;

            for (long long i = left; i <= right; i ++){
                long long tempnum = i;
                long long result = i;

                while (tempnum > 0){
                    result = result * 10 + tempnum % 10;
                    tempnum /= 10;
                }

                sum += result;
            }
        }
        else {
            long long n = N / 2 + 1;
            long long left = pow (10, n - 1);
            long long right = pow (10, n) - 1;

            for (long long i = left; i <= right; i ++){
                long long tempnum = i / 10;
                long long result = i;

                while (tempnum > 0){
                    result = result * 10 + tempnum % 10;
                    tempnum /= 10;
                }

                sum += result;
            }
        }

        printf ("%lld\n", sum);
    }
}