#include <bits/stdc++.h>

using namespace std;

int find_max_num_in_string(string s) {
    int max = 0;
    int temp_num = 0;

    int i = 0;
    while (i < s.size()) {
        while (isalpha(s[i])) ++i;
        while (isdigit(s[i])) {
            temp_num = temp_num * 10 + (s[i] - '0');
            ++i;
        }

        max = (temp_num > max) ? temp_num : max;
        temp_num = 0;
    }

    return max;
}

int main() {
    string s;
    cin >> s;
    int maxnum = find_max_num_in_string(s);
    cout << ((maxnum == 0) ? -1 : maxnum);
    return 0;
}
