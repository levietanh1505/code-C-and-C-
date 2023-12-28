#include <bits/stdc++.h>

using namespace std;

int main (){
    string s, result = "";

    cin >> s;

    for (int i = 0; i < s.size(); ){
        int dem = 1;

        if (s[i] == s[i + 1]){
            while (s[i] == s[i + 1]){
            dem += 1;
            i += 1;
            }

        }
        result += s[i] + to_string (dem);
        i += 1;
    }
    cout << result;
}