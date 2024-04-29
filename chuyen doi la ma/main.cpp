#include <stdio.h>
#include <string.h>

int roman_to_arabic(char roman[]) {
    int i, len = strlen(roman);
    int arabic = 0;
    int previousValue = 0;

    for (i = len - 1; i >= 0; i--) {
        int value;
        switch (roman[i]) {
            case 'I':
                value = 1;
                break;
            case 'V':
                value = 5;
                break;
            case 'X':
                value = 10;
                break;
            case 'L':
                value = 50;
                break;
            case 'C':
                value = 100;
                break;
            case 'D':
                value = 500;
                break;
            case 'M':
                value = 1000;
                break;
            default:
                return -1; // Nếu có ký tự không hợp lệ trong chuỗi La-mã, trả về -1
        }

        if (value < previousValue) {
            arabic -= value;
        } else {
            arabic += value;
        }

        previousValue = value;
    }

    return arabic;
}

int main() {
    int K;
    
    scanf("%d", &K);
    getchar(); // Đọc kí tự newline

    // Duyệt qua từng bộ testcase
    for (int t = 0; t < K; t++) {
        int n; scanf ("%d", &n);
        for (int i = 0; i < n; i ++){
            char roman[10];
            scanf("%s", roman);
            int result = roman_to_arabic(roman);
            printf("%d ", result);
        }
    }
    printf ("\n");

    return 0;
}
