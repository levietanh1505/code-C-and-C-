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

// Hàm so sánh hai số nguyên lớn
// Trả về 1 nếu num1 > num2
// Trả về -1 nếu num1 < num2
// Trả về 0 nếu num1 == num2
int compareLargeIntegers(char num1[], char num2[]) {
    int len1 = stringLength(num1);
    int len2 = stringLength(num2);

    if (len1 > len2) {
        return 1;
    } else if (len1 < len2) {
        return -1;
    } else {
        for (int i = 0; i < len1; ++i) {
            if (num1[i] > num2[i]) {
                return 1;
            } else if (num1[i] < num2[i]) {
                return -1;
            }
        }
        return 0;
    }
}

// Hàm tính hiệu của hai số nguyên lớn
void subtractLargeIntegers(char num1[], char num2[], char result[]) {
    // Kiểm tra số nào lớn hơn
    int cmp = compareLargeIntegers(num1, num2);

    // Đảo ngược hai số nguyên để bắt đầu phép trừ từ chữ số đơn vị
    reverse(num1);
    reverse(num2);

    int borrow = 0; // Biến mượn khi thực hiện phép trừ
    int i;

    // Thực hiện phép trừ từng cặp chữ số từ phải sang trái
    for (i = 0; num1[i] != '\0' || num2[i] != '\0'; ++i) {
        // Lấy giá trị của chữ số từ số thứ nhất nếu còn tồn tại
        int digit1 = (num1[i] != '\0') ? (num1[i] - '0') : 0;

        // Lấy giá trị của chữ số từ số thứ hai nếu còn tồn tại
        int digit2 = (num2[i] != '\0') ? (num2[i] - '0') : 0;

        // Thực hiện phép trừ và cập nhật biến mượn
        int diff;
        if (cmp == 1) {
            diff = digit1 - digit2 - borrow;
        } else {
            diff = digit2 - digit1 - borrow;
        }
        
        if (diff < 0) {
            diff += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }

        // Lưu chữ số cuối cùng của hiệu vào mảng kết quả
        result[i] = diff + '0';
    }

    // Xóa các chữ số 0 ở đầu kết quả nếu có
    while (i > 0 && result[i - 1] == '0') {
        i--;
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

        // Gọi hàm để tính hiệu của hai số nguyên lớn
        subtractLargeIntegers(num1, num2, result);

        // In ra kết quả
        printf("%s\n", result);
    }

    return 0;
}
