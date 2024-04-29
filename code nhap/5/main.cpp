#include <bits/stdc++.h>

using namespace std;
int main (){
    int N; cin >> N;
    bool check_0 = false;
    int arr[N];
    int count = 0;

    for (int i = 0 ; i < N; i ++){
        cin >> arr[i];
        if (arr[i] == 0) check_0 = true;
        count += min(abs(arr[i] + 1),abs(arr[i] - 1));

        arr[i] = (abs(arr[i] + 1) < abs(arr[i] - 1)) ? -1 : 1;
    }

    int tich = 1;
    for (int i = 0; i < N; i ++) tich *= arr[i];

    if (check_0 == false){
        if (tich == 1) cout << count;
        else cout << count + 2;
    }
    else {
        cout << count;
    }
}