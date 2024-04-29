#include <bits/stdc++.h>

using namespace std;
long long GCD(long long a, long long b){
    if(b == 0) return a; 
    return GCD(b, a % b);
}
long long LCM (long long a, long long b){
    return a * b / GCD(a, b);
}

int main(){
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    
    long long mauchung = LCM(b, d);
    long long tu = mauchung / b * a + mauchung / d * c;

    long long k = GCD (tu, mauchung);

    
    cout << tu / k << " " << mauchung / k;    
}