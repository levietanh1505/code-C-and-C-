// in ra min (max(arr1), max(arr2)) có thế đổi giá trị arr1[i] và arr2[i] tùy thích 
#include <bits/stdc++.h>

using namespace std;

int max_array (vector<int>array){
    int max_array = array[0];
    for (auto i : array) max_array = max(i, max_array);

    return max_array;
}
int main(){
    int n;
    cin >> n;
    vector <int> arr1, arr2;

    for (int i = 0; i < n; i ++){
        int x;
        cin >> x;
        arr1.push_back(x);
    }
    for (int i = 0; i < n; i ++){
        int x;
        cin >> x;
        arr2.push_back(x);
    }

    for (int i = 0; i < n; i ++){
        if (arr2[i] < arr1[i]) swap(arr1[i], arr2[i]);
    }
    cout << max_array(arr1) * max_array(arr2);
    return 0;
}