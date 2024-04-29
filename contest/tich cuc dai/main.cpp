#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b) {
    return (*(long long*)b - *(long long*)a);
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);
        long long arr[N];

        for (int i = 0; i < N; i++) {
            scanf("%lld", &arr[i]);
        }

        qsort(arr, N, sizeof(long long), cmp);

        long long max1 = arr[0] * arr[1];
        long long max2 = arr[N - 1] * arr[N - 2];

        if (max2 > max1) {
            printf("%lld\n", max2);
        } else {
            printf("%lld\n", max1);
        }
    }

    return 0;
}
