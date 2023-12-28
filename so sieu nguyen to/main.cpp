#include <bits/stdc++.h>
using namespace std;

//thuật toán tính tổng các chữ số của một số tự nhiên//
int tong_chu_so (int N){
	int i= 0;
	while (N> 0){
	i+= pow(N%10, 3);
	N/= 10;
	}
	return i;
}

//thuật toán kiểm tra số nguyên tố:
//chú ý rằng khi gặp lệnh return nào đó thì hàm sẽ trả về giá trị đó và kết thúc hàm nghĩa là phần code bên dưới không còn được thực hiện nữa//
int check_nguyen_to (int K){
	int i;
	if (K<= 1) return 0;
	if (K>= 2){
		for (i= 2; i<= sqrt(K); i++){
			if (K%i == 0) return 0;
		}
	return 1;
	}
}

int main(){
	int N;
	for (N=2;N<=99999;N++){
        if (check_nguyen_to(N)==1 && check_nguyen_to(tong_chu_so(N))==1){
            cout<<N<<endl;
        }
	}
	return 0;
}

