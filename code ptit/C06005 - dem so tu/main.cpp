// Đếm số từ xuất hiện trong một xâu (không phân biệt in thường và in hoa, output định dạng là in thường)
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    // Nhập chuỗi từ
    char str[1000];
    gets(str);

    // Chuyển hết về kiểu in thường
    for (int i = 0; i < strlen(str); i ++){
        str[i] = tolower(str[i]);
    }

    // Tách chuỗi ra từng từ riêng biệt (dùng hàm strtok trong C)
    int size = 0;
    char arr_str[100][100];
    char* token = strtok (str, " ");
    while (token != NULL){
        strcpy(arr_str[size ++], token);
        token = strtok (NULL, " ");
    }

    // Dùng vòng for đếm số từ trong xâu
    for (int i = 0; i < size; i ++){
        int dem = 0;
        for (int j = 0; j < size; j ++){
            if(strcmp(arr_str[i], arr_str[j]) == 0 && i <= j ) dem ++;
            // Chỉ đếm những chỉ số j >= i những trường hợp còn lại break vì nó bị lặp lại
            else if(strcmp(arr_str[i], arr_str[j]) == 0 && i > j ) break;
            // In ra dem khi mà chỉ số j == size - 1
            if (j == size - 1) printf ("%s %d\n",arr_str[i], dem);
        }
    }
}