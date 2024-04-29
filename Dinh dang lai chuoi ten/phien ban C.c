// Đề bài: chuẩn hóa lại dữ liệu họ và tên bản C
#include <stdio.h>
#include <string.h>

void chuan_hoa_ten(char name[]){
    int i = 0;
    // Bỏ qua kí tự khoảng trắng đầu chuỗi
    if (name[i] == ' '){
        while (name[i] == ' ') ++ i;
    }

    //Xử lý chuỗi sau khi xữ lí
    for (i = 0; i < strlen(name);){
        // Nếu có nhiều khoảng trắng thì chỉ in 1 khoảng trắng và bỏ qua các khoảng trắng sau cùng
        if (name[i] == ' '){
            putchar(" ");
            while (name[i] == ' '  && i < strlen(name)) ++ i;
        }

        // Xử lý dữ liệu các từ tiếp sau đó (sau khi đã xử lý khoảng trắng trước nó)
        else{
            // Xử lý kí tự cần phải viết hoa là các kí tự đầu mỗi từ (i == 0 hoặc trước nó là 1 khoảng trắng)
            if (i == 0 || name[i - 1] == ' '){
                // trường hợp kí tự đó là in thường thì chuyển thành in hoa bằng cách trừ đi mã Ascil cho 32
                if(name[i] <= 'z' && name[i] >= 'a'){
                    putchar ((int)name[i] - 32 ); 
                    i ++;
                }

                else{
                    putchar (name[i]);
                    i ++;
                }
            }

            // Xử lý các kí tự cần phải viết thường là các ký tự ở giữa mỗi từ (i != 0 hoặc trước nó là 1 ký tự không phải là khoảng trắng)
            else {
                if (name[i] <= 'Z' && name[i] >= 'A'){
                    putchar((int)name[i] + 32);
                    i ++;
                }

                else{
                    putchar(name[i]);
                    i ++;
                }
            }
        }
    }
}

int main(){
    char name[100];
    fgets(name, sizeof(name) + 1, stdin);

    chuan_hoa_ten (name);

    return 0;
}