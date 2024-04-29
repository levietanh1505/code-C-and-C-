#include <iostream>

using namespace std;

int main(){
    string str;
    getline(cin, str);
    
    bool check = false;

    for (int i = 0; i < str.size() - 2; i ++){
        // if (str[i] == 'A' && str[i + 1] == 'B' && str[i + 2] != 'A'){
        //     check1 = true;
        // }

        // if (str[i] == 'B' && str[i + 1] == 'A' && str[i + 2] != 'A'){
        //     check1 = true;
        // }
        if(str[i] == 'A' && str[i + 1] == 'B'){
            for (int j = i + 2; j < str.size(); j ++){
                if (str[j] == 'B' && str[j + 1] == 'A') check = true;
            }
        }
        else if(str[i] == 'B' && str[i + 1] == 'A'){
            for (int j = i + 2; j < str.size(); j ++){
                if (str[j] == 'A' && str[j + 1] == 'B') check = true;
            }
        }
    }
    (check == true) ? cout << "YES" : cout << "NO";
}