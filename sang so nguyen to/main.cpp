#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n = 1000000000;
    vector<bool> isPrime(n + 1, true);  // Vector sẽ được khởi tạo với giá trị true

    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i <= sqrt(n); i++) {
        if (isPrime[i]) {
            for (int k = i * i; k <= n; k += i) {
                isPrime[k] = false;
            }
        }
    }

    cout << "Các số nguyên tố từ 2 đến " << n << ": ";
    for (int i = 2; i <= n; i++) {
        if (isPrime[i])
            cout << i << " ";
    }

    return 0;
}


// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     const long long n = 1000000000;
//     int* arr = (int*)calloc(n + 1, sizeof(int));

//     // Không cần thiết lập arr[0] và arr[1] vì calloc đã đặt tất cả giá trị về 0

//     for (long long i = 2; i <= n; i++) {
//         if (arr[i] == 0) {
//             for (long long k = i * i; k <= n; k += i) {
//                 arr[k] = 1;
//             }
//         }
//     }

//     cout << "Các số nguyên tố đến " << n << ": ";
//     for (long long i = 2; i <= n; i++) {
        
//             cout << i << " ";
//     }

//     free(arr); // Giải phóng bộ nhớ khi không còn sử dụng

//     return 0;
// }
