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
