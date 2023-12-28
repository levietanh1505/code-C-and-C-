#include <stdio.h>
#include <stdlib.h>
int mod = 1000000000 + 7;
int mod_pow(long long A, int N, int mod) {
    long long result = 1;
    while (N > 0) {
        if (N % 2 == 1) {
            result = (result * A) % mod;
        }
        A = (A * A) % mod;
        N /= 2;
    }
    return result;
}
int main (){
    int T;
    scanf ("%d", &T);
    for (int i = 1; i <= T; i ++){
        int N;
        scanf ("%d", &N);

        long long m = mod_pow (2, N, mod);
        long long n = mod_pow (2, N - 1, mod);
        if (N == 0){
            printf ("Case %d: 1 0 \n", i);
        }
        else
        printf ("Case %d: %lld %lld\n", i, ((m + 1) * n) % mod, (n * (m - 1)) % mod);
    }
}

// #include <stdio.h>
// #include <stdlib.h>
// long long mod = 1000000000 + 7;
// long long mod_pow(long long A, long long N, long long mod) {
//     long long result = 1;
//     while (N > 0) {
//         if (N % 2 == 1) {
//             result = (result * A) % mod;
//         }
//         A = (A * A) % mod;
//         N /= 2;
//     }
//     return result;
// }
//code sau sai:

// int main (){
//     int T;
//     scanf ("%d", &T);
//     for (int i = 1; i <= T; i ++){
//         long long N;
//         scanf ("%lld", &N);

//         long long k = mod_pow (2, N, mod);


//         printf ("Case %d: %lld %lld\n", i, (k * (k + 1) / 2) % mod, (k * (k - 1) / 2 )) % mod;
//     }
// }