//cho ba số a, b, c tìm số N sao cho là số nhỏ nhất thỏa mãn N là bội chung của a, b, c và N có n chữ số//
#include <bits/stdc++.h>
using namespace std;

//tìm bội chung nhỏ nhất của 2 số//
int bcnn(int a,int b ){
	int i=1;
	if (a>=b){
		int n=a;
		while (n%b!=0){
			i+=1;
			n=a*i;
		}
	return n;
	}
	if (b>=a){
		int n=b;
		while (n%a!=0){
			i+=1;
			n=b*i;
		}
	return n;
	}

}

int main(){
    int a,b,c,n,k,l,d;
    cout<<"nhap vao a, b, c va n lan luot: ";
    cin>>a>>b>>c>>n;

	l= bcnn(bcnn(a,b),c);			// l là bcnn của a b c//
	d= pow(10,n-1);					// d là tự nhiên nhỏ nhất có n chữ số//
	int X= ceil(d/l);	// ép kiểu dữ liệu để tìm X sao cho X là bội của l và X nhỏ nhất và X lớn hơn d//

	if (X < pow(10,n)) cout<< X;
	else cout<<-1;					// check xem thử đã đúng yêu cầu đề bài là số đó có n chữ số chưa//
	return 0;
}