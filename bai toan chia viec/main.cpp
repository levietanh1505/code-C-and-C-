// Đội A mỗi ngày làm được a sản phẩm và cứ x ngày thì nghỉ 1 lần
// Đội B mỗi ngày làm được b sản phẩm và cứ y ngày thì nghỉ 1 lần
// Hỏi với n sản phẩm thì cả 2 đội làm chung trong bao lâu là ngắn nhất
 
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, x, y, n;
	cin>> a>> x>> b>> y>> n;

    // ép kiểu dữ liệu tìm T = t + 1 (vì số ngày bắt buộc là số nguyên) là thời gian ngắn nhất//
    // nếu xảy ra trường hợp t nguyên thì cũng ko sao hết vì còn thuật toán bên dưới sẽ giảm dần T xuống giá trị nhỏ nhất//
    // bất đẳng thức phần nguyên: n >= [n]//
    float t = ((float) (n)) / (a + b - ((float)(a)) / ((float)(x)) - ((float)(b)) / ((float)(y)));
	int T = (int)(t) + 1;

    // giảm dần T để tìm số ngày min//
	while ( (a + b) * T - (T / x) * a - (T / y) * b >= n ){
		T--;
	}
	
    // sau khi chạy hết vòng lặp thì giá trị T cuối cùng không thỏa mãn nên ta tăng thêm T 1 đơn vị//
    // khi đó T sẽ nhận giá trị là thời gian nhỏ nhất thỏa mãn bài toán//
	T += 1;

	cout<<T<<endl;
	return 0;
}

