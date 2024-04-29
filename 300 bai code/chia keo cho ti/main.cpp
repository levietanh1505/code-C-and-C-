#include <iostream>

using namespace std;

int main(){
    long long t, n, m;
    cin >> t;

    while (t--){
        long long sum = 0;
        cin >> n >> m;
        long long arr[n];

        for (int i = 0; i < n; i ++){
            cin >> arr[i];

            if (arr[i] + 1 > m) sum += m;
            else if (m % (arr[i] + 1) == 0){
                sum += m / (arr[i] + 1);
            }
            else{
                sum += m / (arr[i] + 1) + m % (arr[i] + 1);
            } 
        }

        cout << sum << endl;
    }
}