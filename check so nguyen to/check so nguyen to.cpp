#include <bits/stdc++.h>
using namespace std;

// k là số ước nguyên dương của N; gia_tri là trị số N^k//
long long int gia_tri (long long int N){
	long long int i; long long int k=0;
	for (i=2;i<=sqrt(N);i++){
		if (N%i==0) k+=1;
	}
	if ((sqrt(N))*(sqrt(N))==N) k=(k+1)*2-1;
	if ((sqrt(N))*(sqrt(N))!=N) k=(k+1)*2;
	return pow(N,k);
}
int main(){
	long long int a;
	cout<<"Nhap vao a= ";cin>>a;
	long long int n=1;
	while (gia_tri(n)<=a){
      	cout<<"test case "<<n<<" : "<<gia_tri(n)<<endl;//test trực quan//
	    if (gia_tri(n)==a){
            cout<<n;break;
	    }
	    n+=1;
	} 
	if (gia_tri(n)>a) cout<<-1;
}