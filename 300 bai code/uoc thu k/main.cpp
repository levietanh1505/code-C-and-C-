#include <bits/stdc++.h>
using namespace std;

long long find_divisor(long long n, long long k) {
    vector<long long> divisors;
    int count_divisors = 0;

    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (n / i == i) count_divisors++;
            else count_divisors += 2;
        }
    }

    if (k > count_divisors) return -1;
    else {
        if (k <= (count_divisors + 1) / 2) return divisors[k - 1];
        else return n / divisors[count_divisors - k];
    }
}
int main() {
    long long n, k;
    cin >> n >> k;
    cout << find_divisor(n, k);
    return 0;
}