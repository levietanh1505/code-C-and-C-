#include <bits/stdc++.h>

using namespace std;

void sang_tren_doan(int l, int r){
    int size_sang = r - l + 1;
    int arr_sang[size_sang];

    for (int i = 0; i <= size_sang; i ++){
        arr_sang[i] = 1;
    }
    // arr_sang[0] = 0, arr_sang[1] = 0;
    
    for (int i = 2; i <= sqrt(r); i ++){
        // if (arr_sang[i - l] == 1){
        for (int j = max(i * i, (int)ceil(l /i) * i); j <= r; j += i){
            arr_sang[j - l] = 0;
        }
    }

    for (int i = 0; i <= size_sang - 1; i ++){
        if (arr_sang[i] == 1) cout << i + l << " ";
    }
}


int main(){
    int l, r;
    cin >> l >> r;

    sang_tren_doan(l, r);

    return 0;
}