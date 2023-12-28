#include <bits/stdc++.h>

using namespace std;
int searchindex (int arr[], int n, int value){
    int L = 0;
    int R = n - 1;

    int mid;

    while (R - L != 1){
        int mid =  (L + R) / 2;
        if (arr[mid] == value) return mid;
        if (arr[mid] < value) L = mid;
        else R = mid;
    }

    return R;
}
int main (){
    int arr[] = {1, 2, 4, 5, 6, 7, 8, 9, 10, 12};

    cout << searchindex (arr, 10, 10);
}



