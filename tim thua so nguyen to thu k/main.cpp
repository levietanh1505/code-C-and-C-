#include <bits/stdc++.h>

using namespace std;

int main (){
    int N, K;
    cin >> N >> K;

    int square = sqrt (N);

    for (int i = 2; i <= square; i ++){
        while (N % i == 0){
            K -= 1;
            N /= i;

            if (K == 0){
                cout << i;
                return 0;
            }
        }
    }

    if (N > 1) K -= 1;
    if (K == 0) cout << N;
        
    if (K > 0){
        cout << -1;
        return 0;
    }
}
