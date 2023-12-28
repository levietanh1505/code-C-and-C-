//số hoàn hảo là số có tổng các chữ số của số đó đến mức tối giản là 9//
#include <bits/stdc++.h>
using namespace std;

//thuật toán tính tổng các chữ số của 1 số đến mức tối giản//
long long sum(long long N){
	long long i=0;
	while (N> 0){
	i+= N%10;
	N= N/10;
	}
	if (i<10) return i;
	if (i>=10) return sum(i);
}

int main(){
    int t;
    cin>>t;
	if (sum(t) == 9) cout<<1;
	else cout<<0;
	return 0;
}