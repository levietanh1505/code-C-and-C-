//strtok là tách hết sạch tức là có những kí tự nào trong chuỗi cần tách là nó tách sạch
//iss hoặc ss là công cụ split chuỗi ra với dấu hiệu là kí tự cần tách tức in ra các chuỗi được ngăn cách nhau bởi kí tự cần tách
// Cả hai hàm đều đọc từng kí tự của chuỗi và tách, cái khác nhau hai hàm này ở chỗ cách tách của chúng
#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline (cin, str);

    for (int i = 0; i < str.size(); i ++) str[i] = tolower(str[i]);

    stringstream ss(str);

    // Chuẩn hóa các delimiter trước về cùng 1 dạng rồi tách sau
    string token;
    while (getline(ss, token, '-')){
        if (token != "/ax" && token != "" ){
            cout << token << endl;
        } 
    }
}


// // Đếm số từ xuất hiện trong một xâu (không phân biệt in thường và in hoa, output định dạng là in thường)
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main(){
//     // Nhập chuỗi từ
//     char str[1000];
//     gets(str);

//     // Chuyển hết về kiểu in thường
//     for (int i = 0; i < strlen(str); i ++){
//         str[i] = tolower(str[i]);
//     }

//     // Tách chuỗi ra từng từ riêng biệt (dùng hàm strtok trong C)
//     int size = 0;
//     char arr_str[100][100];
//     char* token = strtok (str, " /ax");
//     while (token != NULL){
//         printf ("%s\n", token);
//         token = strtok (NULL, " /ax");
//     }
// }
