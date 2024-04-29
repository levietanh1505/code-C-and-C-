/*/ Trong C++ có hộ trợ kiểu string và hàm toupper và hàm tolower để chuyển sang kiểu in hoa và kiểu in thường. 
Chú ý hàm này trả về kiểu dữ liệu là int nên để in ra bằng lệnh cout thì ta phải ép kiểu về char còn in bằng lệnh putchar thì không cầ
*/
#include <iostream>
#include <string>
#include <cctype>

void chuan_hoa_ten(std::string& name) {
    size_t i = 0;

    // Bỏ qua kí tự khoảng trắng đầu chuỗi
    if (name[i] == ' ') {
        while (name[i] == ' ') ++i;
    }

    // Xử lý chuỗi sau khi xữ lí
    for (i = 0; i < name.length();) {
        // Nếu có nhiều khoảng trắng thì chỉ in 1 khoảng trắng và bỏ qua các khoảng trắng sau cùng
        if (name[i] == ' ') {
            std::cout << ' ';
            while (name[i] == ' ' && i < name.length()) ++i;
        }

        // Xử lý dữ liệu các từ tiếp sau đó (sau khi đã xử lý khoảng trắng trước nó)
        else {
            // Xử lý kí tự cần phải viết hoa là các kí tự đầu mỗi từ (i == 0 hoặc trước nó là 1 khoảng trắng)
            if (i == 0 || name[i - 1] == ' ') {
                std:: putchar(toupper(name[i]));
                i++;
            }

            // Xử lý các kí tự cần phải viết thường là các ký tự ở giữa mỗi từ (i != 0 hoặc trước nó là 1 ký tự không phải là khoảng trắng)
            else {
                std :: putchar(tolower(name[i]));
                i++;
            }
        }
    }
}

int main() {
    std::string name;
    std::getline(std::cin, name);

    chuan_hoa_ten(name);

    return 0;
}