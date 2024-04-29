#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
      
    long long n, k, x, dem = 1;
    cin >> n >> k;
    long long arr[n];
    
    for (int i = 0; i < n; i ++){
        cin >> x;
        arr[i] = x % k;
    }

    //Đếm số lượng số các số dư khác nhau của x chia cho k
    sort(arr, arr + n);
    
    
    for (int i = 1;i < n ; i ++){
        if (arr[i] != arr[i - 1]){
            dem += 1;
        }
    }
    
    cout << dem;
    return 0;
}
