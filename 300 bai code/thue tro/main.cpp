#include <iostream>

using namespace std;

int main(){
    long long n, m, k, result = INT64_MAX;
    cin >> n >> m >> k;
    long long arr[n];

    for (int i = 1; i <= n; i ++) cin >> arr[i];

    for (int i = m + 1; i <= n; i ++){
        if (arr[i] != 0 && arr[i] <= k) result = (i - m) * 10;
    }
    
    for (int i = m - 1; i >= 1; i --){
        if (arr[i] != 0 && arr[i] <= k) result = min ((m - i) * 10, result);
    }

    cout << (result != INT64_MAX ? result : -1);

}