#include <bits/stdc++.h>
using namespace std;

int dao_so(int k){
    int i= 0;
    while (k> 0){
        i= i*10 + k%10;
        k= k/10;
    }
    return i;
}



int main(){
    int N;
    cout<< "nhap so can dao la N= "; cin>>N;
    if (N%10>0)     cout<< dao_so(N);
    if (N%10==0)    cout<<"0"<<to_string(dao_so(N));
}
