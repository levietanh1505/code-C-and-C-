#include <bits/stdc++.h>
using namespace std;

int cmp(string a, string b){
    if (a.size() > b.size()) return 1;
    else if (a.size() < b.size()) return 0;
    else {
        for(int i = 0; i < a.size(); i ++){
            if ((a[i] - '0') > (b[i] - '0')){
                return 1;
            }
            else if ((a[i] - '0') < (b[i] - '0')){
                return 0;
            }
        }
    }
    return 2;
}
int main(){
    string a, b;
    getline(cin, a);
    // cin.ignore();
    getline(cin,b);

    if(a[0] == '-' && b[0] != '-'){
        cout << '<';
    }
    else if(b[0] == '-' && a[0] != '-'){
        cout << '>';
    }
    else if(b[0] != '-' && a[0] != '-'){
        if(cmp(a, b) == 1) cout << '>';
        else if(cmp(a, b) == 0) cout << '<';
        else cout << '=';
    }
    else{
        a[0] = '0';
        b[0] = '0';
        if(cmp(a, b) == 1) cout << '<';
        else if(cmp(a, b) == 0) cout << '>';
        else cout << '=';

    }
    // cout << cmp (a, b);
}