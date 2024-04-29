#include <bits/stdc++.h>
using namespace std;
map <int, int> arr;

int main(){
    
    int n;
    cin >> n;

    for (int i = 0; i < n; i ++){
        int a;
        cin >> a;
        arr[a]++;
    }

    for (auto i : arr){
        cout << i.first << " xuat hien: " << i.second << " lan" << endl;
    }
}