#include <stdio.h>
#include <string.h>

// Hàm để tìm độ dài của dãy con tăng lớn nhất không liên tục
int findMaxIncreasingSubsequence(char* arr, int n) {
    int max_length[n]; // Mảng lưu trữ độ dài của dãy con tăng lớn nhất kết thúc tại mỗi vị trí i
    int max = 1; // Độ dài của dãy con tăng lớn nhất

    // Khởi tạo mảng độ dài dãy con tăng lớn nhất
    for (int i = 0; i < n; i++) {
        max_length[i] = 1;
    }

    // Tính toán độ dài của dãy con tăng lớn nhất kết thúc tại mỗi vị trí
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j] && max_length[i] < max_length[j] + 1) {
                max_length[i] = max_length[j] + 1;
                if (max < max_length[i]) {
                    max = max_length[i];
                }
            }
        }
    }

    return max;
}

int main() {
    char Str[10000];
    gets(Str);
    //int n = strlen(Str);

    int max_length = findMaxIncreasingSubsequence(Str, strlen(Str));

    printf("%d\n",26 - max_length);

    return 0;
}
