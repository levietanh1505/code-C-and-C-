#include <iostream>
#include <vector>

using namespace std;

int main() {
    int arr_res[3] = {0};
    long long N; 
    cin >> N;
    
    vector<long long> arr(N);
    for (int i = 0; i < N; i ++) {
        cin >> arr[i];
        arr_res[arr[i] % 3] ++;
    }
    
    long long res = 0;
    // for (int i = 0; i < 3; i++){
    //     res += ((arr_res[i] > 2 ) ? arr_res[i] * (arr_res[i] - 1) * (arr_res[i] - 2) / 6 : 0);
    // }
    
    // Trường hợp 0 + 1 + 2
    res += arr_res[0] * arr_res[1] * arr_res[2];
    
    cout << res << endl;
    return 0;
}