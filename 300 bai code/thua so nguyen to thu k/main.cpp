#include <bits/stdc++.h>
using namespace std;

int main(){
    long long  n, k;
    cin >> n >> k;

    for (int i = 2; i <= sqrt(n); i ++){
        if (n % i == 0 && k > 0){
            k --;
            if (k == 0){
                cout << i;
                return 0;
            }
            while (n % i == 0){
                n = n / i;
            }
        }
    }
    if (n == 1 && k != 0) cout << -1; 
    else if (n > 1){
        k --;
        if (k == 0) cout << n;
        else cout << -1;
    }
    return 0;
}