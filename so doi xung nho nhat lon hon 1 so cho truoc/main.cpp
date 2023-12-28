// Đề bài: hãy tìm số đối xứng nhỏ nhất sao cho lớn hơn 1 số cho trước
// Hướng giải quyết: tạo 1 hàm cho ra số đối xứng (tạm thời) và đây cũng ko phải là đáp số cuối cùng
// vd: 12345 thì cho ra 12321
//     1232  thì cho ra 1221
// Vậy để giải quyết bài toán thì ta sẽ cộng 12345 với 100; 1232 với 100 và return lại hàm
// vd: 12345 --> 12445 --> 12421
// 	   1232  --> 1332  --> 1331


#include <bits/stdc++.h>
using namespace std;

long long tachso (long long N){
	long long n = log10 (N) + 1;	// n là số chữ số của N
		
	if (n % 2 == 0){
		long long P = N / (pow(10,(n / 2)));
		N = N / (pow(10,n / 2));
		 
		while (P > 0){
			N = N * 10 + P % 10;
			P /= 10;
		}
		return N;
	}
	else{
		long long P = N / (pow(10, (n / 2 + 1)));
		N = N / (pow(10, n / 2)); 
			
		while (P > 0){
			N = N * 10 + P % 10;
			P /= 10;
		}
		return N;
	}
}

int main(){
	long long t, N;
	cin >> t;
	
	for (long long i = 1; i <= t; i++){
		cin >> N;

		long long n = log10 (N) + 1;

		if (tachso(N) > N) cout<< tachso(N);
		else{
			N = N + pow (10, n/2);
			cout << tachso (N);
		}
		
		cout<<endl;
	}
	return 0;
}