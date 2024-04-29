#include <bits/stdc++.h>
using namespace std;
int max_digits (int N){
    int result = 0;
    while (N > 0){
        result = max(result, (int) N%10);
        N /= 10;
    }
    return result;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n, dem = 0;
    cin >> n;
    while (n > 0){
        n = n - max_digits(n);
        dem += 1;
    }
    cout << dem;
    return 0;
}
