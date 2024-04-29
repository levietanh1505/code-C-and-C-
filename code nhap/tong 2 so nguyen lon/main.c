#include <stdio.h>

// Hàm đảo ngược một chuỗi
void reverse(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    
    for (int i = 0; i < len / 2; ++i) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

// Hàm tính độ dài của chuỗi
int stringLength(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

// Hàm tính tổng của hai số nguyên lớn
void addLargeIntegers(char num1[], char num2[], char result[]) {
    // Xác định độ dài của hai số nguyên
    int len1 = stringLength(num1);
    int len2 = stringLength(num2);

    // Đảo ngược hai số nguyên để bắt đầu phép cộng từ chữ số đơn vị
    reverse(num1);
    reverse(num2);

    int carry = 0; // Biến nhớ khi thực hiện phép cộng
    int i;

    // Thực hiện phép cộng từng cặp chữ số từ phải sang trái
    for (i = 0; i < len1 || i < len2; ++i) {
        // Lấy giá trị của chữ số từ số thứ nhất nếu còn tồn tại
        int digit1 = (i < len1) ? (num1[i] - '0') : 0;

        // Lấy giá trị của chữ số từ số thứ hai nếu còn tồn tại
        int digit2 = (i < len2) ? (num2[i] - '0') : 0;

        // Thực hiện phép cộng và cập nhật biến nhớ
        int sum = digit1 + digit2 + carry;
        carry = sum / 10;

        // Lưu chữ số cuối cùng của tổng vào mảng kết quả
        result[i] = (sum % 10) + '0';
    }

    // Nếu vẫn còn biến nhớ sau khi kết thúc vòng lặp, thêm chữ số cuối cùng vào mảng kết quả
    if (carry > 0) {
        result[i] = carry + '0';
        ++i;
    }

    // Đặt ký tự kết thúc chuỗi
    result[i] = '\0';

    // Đảo ngược kết quả để có kết quả chính xác
    reverse(result);
}

int main() {
    char num1[1000], num2[1000]; // Mảng lưu trữ hai số nguyên lớn
    char result[1001]; // Mảng lưu trữ kết quả
    int T; scanf("%d", &T);
    while (T --){
        // Nhập hai số nguyên lớn từ bàn phím
        scanf("%s", num1);
        scanf("%s", num2);

        // Gọi hàm để tính tổng hai số nguyên lớn
        addLargeIntegers(num1, num2, result);

        // In ra kết quả
        printf("%s\n", result);
    }

    return 0;
}
