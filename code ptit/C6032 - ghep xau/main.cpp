#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//Khai báo mảng cấu trúc, mõi mãng sẽ chứa các Str dùng để chứa các chuỗi kí tự nhập vào 
typedef struct {
    char str[1000];
}ArrStr;

// Hàm compare dùng để so sánh các tham số của mảng truyền vào
int compare (const void* a, const void* b){
    //Ép kiểu con trỏ const về kiểu struct ArrStr để lấy thuộc tính Str của nó
    ArrStr* A = (ArrStr *)a;
    ArrStr* B = (ArrStr *)b;
    
    //Khởi tạo 2 biến chuỗi kí tự s1 và s2: s1 = A -> Str + B -> Str, s2 = B-> Str + A -> Str
    char s1[30], s2[30];
    strcpy(s1, A -> str);
    strcat(s1, B -> str);

    strcpy(s2, B -> str);
    strcat(s2, A -> str);

    // Có nghĩa là nếu s1 mà lớn hơn s2 thì chúng sẽ đổi chỗ cho nhau
    return strcmp(s1, s2) > 0;
}

int main (){
    // Đọc số lượng Test 
    int Test;
    scanf ("%d", &Test);

    while (Test --){
        int n; scanf ("%d", &n);
        ArrStr arr[n];

        // Đọc giữ liệu vào từng mảng arr 
        for (int i = 0; i < n; i ++) scanf ("%s", &arr[i].str);

        //Sắp xếp mảng theo chuẩn của hàm compare
        qsort (arr, n, sizeof (ArrStr), compare);

        //In mảng arr ra theo thứ tự đã sắp xếp tạo thành từ có thứ tự lớn nhất trong bảng chữ cái
        for (int i = 0; i < n; i ++){
            printf ("%s", arr[i].str);
        }
        printf ("\n");
    }
}