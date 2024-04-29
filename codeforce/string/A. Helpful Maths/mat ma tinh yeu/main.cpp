/*
Tình yêu luôn chất chứa nhiều bí mật và dĩ nhiên tình yêu của Mely và bồ cô ấy cũng không ngoại lệ. 
Mely và người yêu có một mật mã riêng với nhau theo một trong hai quy tắc sau:
nhân số hiện tại với 2 (có nghĩa là thay x bằng 2⋅x); thêm chữ số 1 vào bên phải số hiện tại (có nghĩa là thay xbằng 10⋅x+1) .
Mely gửi cho người yêu một số avà người yêu của Mely theo quy tắc trên sẽ gửi lại cho Mely một số b. 
Số b phải được biến đổi theo quy tắc trên từ a mà Mely gửi.Có vẻ như người yêu của Mely đang gặp vấn đề vì quên cách chuyển mật mã riêng của 2 người rồi.
Bạn có thể giúp người yêu Mely kiểm tra xem mình có nhớ đúng quy tắc không đi.
Chú ý là bồ của Mely chỉ cần bạn giúp anh ấy tìm ra cách chuyển từ a sang b không cần ít thao tác nhất.
Input
Dòng đầu tiên chứa 2 số nguyên a và b (1≤a<b≤10^9) — con số Mely gửi và số bồ Mely định gửi.
Output
Nếu không có cách tạo được số b từ a, in "NO".
Trường hợp còn lại in 3 dòng. Dòng đầu tiên in "YES". 
Dòng thứ hai chứa một số nguyên k— số bước chuyển đổi. 
Dòng thứ 3 chứa k số nguyên x1,x2,…,xk, thoả mãn:
x1= a,
xk= b,
xi có thể được biến đổi từ xi−1sử dụng một trong hai quy tắc đã nêu ở trên (1<i≤k).
Nếu có nhiều câu trả lời, in ra một phương án bất kì.
Examples:
inputCopy
2 42
outputCopy
YES
3
2 21 42

inputCopy
5 100
outputCopy
NO
*/

#include <bits/stdc++.h>

using namespace std;

int main (){
    int a, b;
    cin >> a >> b;
    int a_copy = a, b_copy = b;
    int dem = 1;
    
    //check điều kiện bài toán
    while (b_copy > a_copy){
        if (b_copy % 2 != 0 && b_copy % 10 != 1) {
            cout << "NO";
            return 0;
        }

        if (b_copy % 2 == 0){
          b_copy = b_copy / 2;  
          dem ++;
        }
        else if (b_copy % 10 == 1){
            b_copy = (b_copy - 1) / 10;
            dem ++;
        }
    }
    // trải qua vòng lặp while thì b = a hoặc b < a

    vector <long long> arr_result;
    arr_result.push_back(b);
    if (a_copy == b_copy){
        cout <<"YES" << endl << dem << endl;
        while (b > a){
            if (b % 2 == 0) {
                b = b / 2;  
                arr_result.push_back(b);
            }
            else if (b % 10 == 1){
                b = (b - 1) / 10;
                arr_result.push_back(b);
            }
        }

        for (int i = arr_result.size() - 1; i >= 1; i --){
            cout << arr_result[i] << " ";
        }
        cout << arr_result[0];
    }
    else cout << "NO"; // điều kiện bị sai (điều kiện đúng bắt buộc a và b sau cùng phải bằng nhau)

    return 0;
}