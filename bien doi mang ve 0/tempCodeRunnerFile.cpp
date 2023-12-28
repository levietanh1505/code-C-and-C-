#include <stdio.h>

// hàm check xem mang đã về 0 chưa (tất cả các phần tử về 0 chưa)
bool checkmang (int a[], int n){
    for (int i = 0; i < n; i ++){
        if (a[i] != 0) return false;
    }
    return true;
}

void thaotac1 (int a[], int n){
    for (int i = 0; i < n; i ++) a[i] /= 2;
}

int main (){
    int T;
    scanf ("%d", &T);

    while (T --){
        int n, m;
        scanf ("%d %d", &n, &m);
        int arr[n];

        for (int i = 0; i < n; i ++) scanf ("%d", &arr[i]);

        int count = 0;
        while (checkmang (arr, n) == false){
            for (int i = 0; i < n; i ++){
                if (arr[i] % 2 == 1) {
                    arr[i] -= 1;
                    count += 1;
                }
            }

            thaotac1;
            count += 1;
        }

        printf ("%d", count);
    }
}