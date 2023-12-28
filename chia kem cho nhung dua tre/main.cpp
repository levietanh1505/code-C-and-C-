#include <bits/stdc++.h>
using namespace std;



int main (){
    int n;
    cin >> n;
    long long arr[n], arr_result[n];
    arr_result[0] = 1;
    long long min = arr_result[0];
    long long sum = 0;
    int l = 0; r = 0;
    
    for (int i = 0; i < n; i ++){
        cin >> arr[i];
        
        if (i > 0){
            if (arr[i] > arr[i - 1]) arr_result[i] = arr_result[i - 1] + 1;
            else if (arr[i] < arr[i - 1]) arr_result[i] = arr_result[i - 1]- 1;
            else if (arr[i] == arr[i - 1]){
                r = i - 1;
                for (int i = l; i <= r; i ++){
                    sum += arr_result [i];
                
                    min = (arr_result[i] < min) ? arr_result[i] : min;
                }

                sum += 1 - min;

                arr_result[i] = 1;
            }
        }
    }
}
    
    
    
    
    long long delta = 1 - min;
    
    cout << sum + delta * n << endl;
    for (int i = 0; i < n; i ++){
        cout << arr_result[i] + delta << " ";
    }
    
    return 0;
}