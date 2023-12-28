// #include <iostream>

// int* arrsum(int arr[], int N) {
//     int* result = new int[N + 1]{0};

//     for (int i = 1; i <= N; i++) {
//         result[i] = result[i - 1] + arr[i - 1];
//     }

//     return result;
// }

// int main() {
//     int N;
//     std::cin >> N;

//     int arr[N];
//     for (int i = 0; i < N; i++) {
//         std::cin >> arr[i];
//     }

//     int* result = arrsum(arr, N);

//     for (int i = 0; i <= N; i++) {
//         std::cout << result[i] << " ";
//     }

//     // Dùng delete để giải phóng bộ nhớ
//     delete[] result;

//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;


int main() {
    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int arrsum[N] = {0};
    arrsum[0] = arr[0];

    for (int i = 1; i < N; i ++){
        arrsum[i] = arrsum[i - 1] + arr[i];
    }

    int L, R;

    for (int i = 0; i < N; i ++){
        if (arrsum[i] == 0);
    }

}


