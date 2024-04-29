// Xong nhớ viết lại hàm strtok tách các kí tự "*x^" ra, lấy mình hệ số và số mũ thôi
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
// hàm tách chuỗi thành hệ số và số mũ arr_res[i], chỉ số i là hệ số tương ứng số mũ arr_res[i]
void BienDoi(int arr_res[], char str[]) {
    // dùng hàm strtok tách chuỗi ra thành các nhóm nhỏ
    char* token = strtok(str, " + ");

    while (token != NULL) {
        int i = 0;
        while (i < strlen(token)) {
            int HeSo = 0;
            int Mu = 0;
            
            // tách lấy hệ số
            while (isdigit(token[i])) {
                HeSo = HeSo * 10 + token[i] - '0';
                i++;
            }
            // tách dữ liệu thừa
            while (!isdigit(token[i])) i++;
            // tách lấy số mũ
            while (isdigit(token[i])) {
                Mu = Mu * 10 + token[i] - '0';
                i++;
            }
            arr_res[Mu] += HeSo;
        }
        token = strtok(NULL, " + ");
    }
}

int main() {
    int T;
    scanf("%d", &T);
    getchar(); // Xóa bộ đệm nhớ đệm sau scanf

    while (T--) {
        int arr_res[10001] = {0}; // mảng lưu kết quả cuối cùng
        char str_1[100], str_2[100];

        gets(str_1);
        gets(str_2);

        BienDoi(arr_res, str_1);
        BienDoi(arr_res, str_2);

        bool firstTerm = true; // biến check để in ra " + "
        for (int i = 10000; i >= 0; i--) {
            if (arr_res[i] != 0) {
                if (!firstTerm) {
                    printf(" + ");
                }
                printf("%d*x^%d", arr_res[i], i);
                firstTerm = false;
            }
        }
        printf("\n");
    }
    return 0;
}