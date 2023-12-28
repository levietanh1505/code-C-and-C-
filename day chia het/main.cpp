#include <iostream>
int arr_danhdau[100000];
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int arr[n];

    int sum = 0;
    for (int i = 0; i < n; i ++){
        cin >> arr[i];
        sum += arr[i] % k;
        arr[i] = sum % k;
    }

    //for (int i = 0; i < n; i ++) cout << arr[i] << " ";

    for (int i = 0; i < n; i ++){
        arr_danhdau[arr[i]] += 1;
    }
    
    for (int i = 0; i < n; i ++){
        if (arr_danhdau[arr[i]] >= 3) k = arr[i];
    }

    for (int i = 0; i < n; i ++){
        if (arr[i] == k){
            int l = i;
            break;
        }
    }

    for (int i = n - 1; i >= 0; i --){
        if (arr[i] == k){
            int r = i;
            break;
        }
    }


}