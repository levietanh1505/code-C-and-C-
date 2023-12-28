// in ra trong khoang [L;R] co bao nhieu so la hop so nhung so cac uoc cua no la so nguyen to//
#include <bits/stdc++.h>
using namespace std;

bool checksonguyento(int N){
    if (N<=1) return false;
    if (N == 2) return true;       //co the bo dong nay//
    for (int i=2; i<=sqrt(N); i++){
        if (N%i == 0) return false;
    }
    return true;
}

int demsouoc (int N){
    int n= 0;
    for (int i= 1; i<= N; i++) {
        if (N%i == 0) n+=1;
    }
    return n;
}

int main(){
    int T, L, R;
    cin>>T;
    for (int i= 1; i<= T; i++){
        cin>>L>>R;
        int dem = 0;
        for (int n= L; n<= R; n++){
            if (checksonguyento (n)== false && checksonguyento( demsouoc(n) ) == true) dem += 1;
        }
        cout<<dem<<endl;
    }
    return 0;
}
