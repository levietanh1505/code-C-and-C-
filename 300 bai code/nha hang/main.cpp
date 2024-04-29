#include<bits/stdc++.h>
using namespace std;


bool cmp(const pair<int, int>& a, const pair<int, int>& b){
    return a.first <= b.first;
}

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> times(n);
    for(int i = 0; i < n; i++) {
        cin >> times[i].first >> times[i].second;
    }

    sort(times.begin(), times.end(), cmp); 

    int max_customers = 0, current_customers = 0;
    for(int i = 0; i < n; i++) {
        int min_second = times[i].second;
        current_customers++;
        while(i + 1 < n && min_second >= times[i + 1].first) {
            min_second = min(min_second, times[i].second);
            i++;
            
            current_customers++;
        }

        max_customers = max(max_customers, current_customers);
        current_customers = 0;
    }
    cout << max_customers << endl;
    return 0;
}
