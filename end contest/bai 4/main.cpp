#include <bits/stdc++.h>

using namespace std;


int main (){
    // bài tập: tính tổng các chữ số của 1 số nhập từ bàn phím:
    // vd : 12312 thì in ra: 9

    // 1 / 10 = 12 ( chú ý ép kiểu dữ liệu )
    double a, b, c;
    cin >> a >> b >> c;

    long long m = ceil (a / c) ;
    long long n = floor (b / c);

    cout << (n - m ) + 1;
}


// kiểu int, long long, float, double, char : 'a', string : "âkjsjaks"

/*
căn: sqrt (số nào đó);
mũ: pow (a, b) = a ^ b

vòng lặp: 
giải quyết những cái bài toán mang tính lặp đi lặp lại
1. vòng lặp for:
int sum = 0;
for (int i = 1; i <= 100; i ++){
    sum += i;
}
 i += 2 <=> i = i + 2
nên dùng dùng khi mà biết được số lần lặp

2. Vòng lặp while:
cấu trúc : while (điều kiện){
    câu lệnh;
}

int sum = 0;
int i = 0;
while (i <= 100){
    sum += i;
}

*/ 

/*
câu lệnh điều kiện if else trong C ++:

if (điều kiện 1){
    câu lệnh 1;
}
else if (điều kiện 2){
    câu lệnh 2;
}
else if (điệu kiện 3){
    câu lệnh 3;
}
else{
    câu lệnh 4;
}


*/
// bài tập: tính tổng các chữ số của 1 số nhập từ bàn phím:
// vd : 12312 thì in ra: 9