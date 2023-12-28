#include <stdio.h>
#include <stdlib.h>
int cmp (const void *a, const void *b){
    return *(int *)a - *(int *)b;
}
int main (){
    int N;
    scanf ("%d", &N);
    long long arr[N];
    for (int i = 0; i < N; i ++) scanf ("%lld", &arr[i]);
    qsort (arr, N, sizeof(long long), cmp);

    // for (int i = 0; i < N; i ++){
    //     printf ("%d ", arr[i]);
    // }

    long long max1 = arr[0] * arr[1];
    long long max2 = arr[N - 1] * arr[N - 2];

    long long maxtich = (max1 > max2) ? max1 : max2;

    printf ("%lld", maxtich);
}