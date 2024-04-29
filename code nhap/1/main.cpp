#include <stdio.h>
#include <string.h>

// Hàm chuyển đổi ký tự La Mã sang số thập phân tương ứng
int romanToDecimal(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

// Hàm chính để chuyển đổi chuỗi La Mã sang số thập phân
int convertRomanToDecimal(const char *roman) {
    int decimal = 0;
    
    for (int i = 0; i <= strlen(roman) - 1; i++) {
        int last_value = romanToDecimal(roman[i + 1]);
        int value = romanToDecimal(roman[i]);
        if (value < last_value)
            decimal -= value;
        else
            decimal += value;
    }
    return decimal;
}

int main() {
    char roman[30];
    int T; scanf ("%d", &T);
    while (T --){
        int N; scanf ("%d", &N);
        for (int i = 0; i < N; i ++){
            scanf("%s", roman);
            printf("%d ",convertRomanToDecimal(roman));
        }

        printf ("\n");
    }
    
    return 0;
}
