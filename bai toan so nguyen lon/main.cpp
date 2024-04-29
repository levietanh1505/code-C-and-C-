#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Hàm cộng hai số nguyên lớn
string addLargeNumbers(string num1, string num2) {
    int len1 = num1.size();
    int len2 = num2.size();
    int maxLen = max(len1, len2);
    // Đảm bảo cả hai chuỗi có cùng độ dài bằng cách thêm các số 0 vào trước số ngắn hơn
    if (len1 < maxLen) num1 = string(maxLen - len1, '0') + num1;
    if (len2 < maxLen) num2 = string(maxLen - len2, '0') + num2;
    string result = "";
    int carry = 0;
    // Duyệt từ cuối chuỗi đến đầu để cộng cột theo cột
    for (int i = maxLen - 1; i >= 0; i--) {
        int digit1 = num1[i] - '0';
        int digit2 = num2[i] - '0';
        int sum = digit1 + digit2 + carry;
        // Lưu phần đơn vị của tổng vào kết quả
        result += to_string(sum % 10);
        // Lưu phần hàng chục (nếu có) vào carry
        carry = sum / 10;
    }
    // Nếu còn dư sau khi cộng, thêm vào kết quả
    if (carry > 0) result += to_string(carry);
    // Đảo ngược chuỗi kết quả để nhận được kết quả chính xác
    reverse(result.begin(), result.end());
    return result;
}

int main() {
   
    string num;
	cin >> num;

	int size = num.length();
	while (size != 1){
		string str1 = num.substr(0, size / 2); //cout << str1 << ' ';
		string str2 = num.substr(size / 2, size - size / 2); //cout << str2 << ' ';
		num = addLargeNumbers(str1, str2);
		cout << num << endl;
		size = num.length();
	}
	
}
