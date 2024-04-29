#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> schedule(N);
    for(int i = 0; i < N; i++) {
        cin >> schedule[i].first >> schedule[i].second;
    }
    sort(schedule.begin(), schedule.end());
    int count = 0;
    for(int i = 0; i < N; i++) {
        for(int j = i + 1; j < N; j++) {
            if(schedule[j].first < schedule[i].second) {
                count++;
            } else {
                break;
            }
        }
    }
    cout << count;
    return 0;
}
