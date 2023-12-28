#include <bits/stdc++.h>
using namespace std;

int check_so_nguyen_to(int n){
    if (n<=1) return 0;
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0) return 0;
    }
    return 1;
}
int main(){
    int n,N;
    cout <<"nhap vao gioi han tim kiem N= ";cin>>N;
    for (n=1;n<=N;n++){
        if (check_so_nguyen_to(n)){
            cout <<n<<endl;
        }
    }
    return 0;
}

