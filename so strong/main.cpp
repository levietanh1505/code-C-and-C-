//số strong (số mạnh mẽ) là số mà tổng lập phương các chữ số của nó bằng chính nó//
#include <bits/stdc++.h>
using namespace std;


int tong_lap_phuong(int N){
	int i= 0;
	while (N>0){
	i+= pow(N%10, 3);
	N/= 10;
	}
	return i;
}

int main(){
	int n;
	for (n= 1;n< 9999999999999;n++){
		if (tong_lap_phuong(n) == n) cout<<n<<endl;
	}
	return 0;
}