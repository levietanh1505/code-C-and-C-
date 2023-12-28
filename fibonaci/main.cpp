#include <bits/stdc++.h>
using namespace std;

long long fibo(long long n){
	if (n == 1||n == 2) return 1;
	if (n!= 1 && n!= 2) return fibo(n-1) + fibo(n-2); //thuat toan de qui//
}

int main(){
	for (long long i= 1;i<= 100;i++){
        cout<<"so fibo thu "<<i<<" la: "<<fibo(i)<<endl;
	}
	return 0;
}
