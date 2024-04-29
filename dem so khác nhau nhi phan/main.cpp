#include <bits/stdc++.h>
using namespace std;


int main (){
    int a, b;
    cin >> a >> b;

    vector <int> arr_bit_1, arr_bit_2;

    while (a != 0){
        arr_bit_1.push_back(a % 2);
        a = a/ 2;
    }
    while (b != 0){
        arr_bit_2.push_back(b % 2);
        b = b/ 2;
    }

    // for (int i = 0; i < arr_bit_1.size(); i ++){
    //     cout << arr_bit_1[i] << " ";
    // }

    if (arr_bit_1.size() > arr_bit_2.size()){
        for (int i = arr_bit_2.size(); i < arr_bit_1.size(); i ++){
            arr_bit_2.push_back(0);
        }
    }
    else if (arr_bit_1.size() < arr_bit_2.size()){
        for (int i = arr_bit_1.size(); i < arr_bit_2.size(); i ++){
            arr_bit_1.push_back(0);
        }
    }

    for (int i = 0; i < arr_bit_1.size(); i ++){
        cout << arr_bit_1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < arr_bit_2.size(); i ++){
        cout << arr_bit_2[i] << " ";
    }
    cout <<endl;
    int dem = 0;
    for (int i = 0; i < arr_bit_1.size(); i ++){
        if (arr_bit_1[i] != arr_bit_2[i]) dem += 1;
    }

    cout << dem;

}

