#include <iostream>
#include <vector>

using namespace std;

int main(){
    //vector<int> vt {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int n;
    cin >> n;
    vector <int> vt;

    for (int i = 1; i <= n; i ++) vt.push_back(i);
    
    int i = 0;
    while (vt.size() != 0){
        if (i == vt.size()){
            i = 1;
            while (i < vt.size()){
                cout << vt[i] << ' ';
                vt.erase(vt.begin() + i);
                ++i;
            } 
            --i;
        } 
        else if (i == vt.size() - 1){
            i = 0;
            while (i < vt.size()){
                cout << vt[i] << ' ';
                vt.erase(vt.begin() + i);
                ++i;
            } 
            --i;
        }
        else{
            while (i < vt.size() - 1){
                cout << vt[i + 1] << ' ';
                vt.erase(vt.begin() + i + 1);                
                ++ i;
            } 
        }
    }
}