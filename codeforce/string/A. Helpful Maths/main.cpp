#include <bits/stdc++.h>

using namespace std;

int checknt(int n){
    for (int i = 2; i <= sqrt (n); i ++){
        if (n % i == 0) return 0;
    }

    return (n >= 2);
}
int main (){
    int T;
    cin >> T;

    while (T --){
        int n;
        cin >> n;

        if (checknt(n) == 1) cout << 1 << " " << n << endl;
        else {
            int start = sqrt (n);

            for (int i = start; i <= n; i ++){
                if (n % i == 0){
                cout << n / i << " " << i << endl; 
                break;
                } 
            }
        }
    }
}