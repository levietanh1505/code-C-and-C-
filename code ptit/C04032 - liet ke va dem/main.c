#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Hàm check một số phải số không giảm hay không
int CheckIncreaseNum(int n){
    char num[10];
    // Chuyển int sang char
    sprintf(num, "%d", n);
    for (int i = 0; i < strlen(num) - 1; i ++){
        // Không thỏa mãn thì return 0
        if (num[i] > num[i + 1]) return 0;
    }
    return 1;
}

// Cấu trúc key là giá trị của mảng và valuefreq là tần số xuất hiện của giá trị trong mảng
struct ArrWithFreq{
    int Key;
    int ValueFreq;
};
struct ArrWithFreq ArrWithFreqs[5000000]; // Tạo một mảng cấu trúc để lưu

// Thiết lập hàm cmp cho hàm qsort
int cmp(const void* a, const void* b){
    // Ép kiểu con trỏ 
    struct ArrWithFreq* A = (struct ArrWithFreq*)a;
    struct ArrWithFreq* B = (struct ArrWithFreq*)b;
    return B->ValueFreq - A->ValueFreq; // Sắp xếp theo giảm dần của ValueFreq
}

int main(){
    int number; // Số được nhập vào từ bàn phím
    int size = 0; // kích thước mảng cấu trúc ArrWithFreq

    while (scanf("%d", &number) != -1){
        // Check xem phải số không giảm hay không trước đã
        if (CheckIncreaseNum(number)){
            bool check = false; // Biến check xem giá trị number nhập vào tồn tại hay chưua

            for (int i = 0; i < size; i ++){
                // Nếu số number nhâp vào bàn phím đã tồn tại
                if (number == ArrWithFreqs[i].Key){
                    ArrWithFreqs[i].ValueFreq ++; // Tăng tần xuất của mảng đó lên
                    check = true; // đánh dấu là đã tồn tại 
                    // Break ra khỏi vòng lặp để đến các giá trị tiếp theo vì các giá trị sau đó không có giá trị nào == number nữa
                    break;
                } 
            }      
            // Chưa tồn tại thì gán nó vào mảng 
            if (check == false) {
                ArrWithFreqs[size].Key = number;
                ArrWithFreqs[size].ValueFreq = 1; // Tần suất bằng 1
                size ++; // Tăng kích thức mảng cấu trúc lên 1
            }
        } 
    }
    
    // Sắp xếp lại mảng cấu trúc đó
    qsort (ArrWithFreqs, size, sizeof(struct ArrWithFreq), cmp);
    // In ra theo yêu cầu của đề bài
    for (int i = 0; i < size; i++) {
        printf("%d %d", ArrWithFreqs[i].Key, ArrWithFreqs[i].ValueFreq);
        printf("\n");
    }  
    return 0;
}