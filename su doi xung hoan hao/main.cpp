#include <stdio.h>


int main() {
    long n;
    scanf("%ld", &n);
    long long arr[n];
    for (long long i = 1; i <= n; i++) {
        scanf("%lld", &arr[i]);
    }

    long dem = 0;
    for (long i = 1, j = n; i <= n && j >= 1;) {
        if (arr[i] == arr[j]) {
            i++;
            j--;
            if (i >= j) break;
        } 
        else {
            if (arr[i] < arr[j]) {
                arr[i + 1] = arr[i] + arr[i + 1];
                dem++;
                i++;
            }
            else {
                arr[j - 1] = arr[j] + arr[j - 1];
                dem++;
                j--;
            }
        }
    }

    printf("%ld\n", dem);

    return 0;
}