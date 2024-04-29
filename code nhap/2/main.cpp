// Học lại iss và strtok về tách chuỗi
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

void BienDoi(vector<int>& arr_res, const string& str) {
    stringstream ss(str);
    string token;
    while (getline(ss, token, '+')) {
        int HeSo = 0, Mu = 0;
        stringstream token_ss(token);

        token_ss >> HeSo >> Mu;
        arr_res[Mu] += HeSo;
    }
}

int main() {
    int T;
    cin >> T;
    cin.ignore(); // Xóa bộ đệm nhớ đệm sau cin

    while (T--) {
        vector<int> arr_res(10001, 0); // Mảng lưu kết quả cuối cùng
        string str_1, str_2;
        getline(cin, str_1);
        getline(cin, str_2);

        BienDoi(arr_res, str_1);
        BienDoi(arr_res, str_2);

        bool firstTerm = true; // Biến kiểm tra để in ra " + "
        for (int i = 10000; i >= 0; --i) {
            if (arr_res[i] != 0) {
                if (!firstTerm) {
                    cout << " + ";
                }
                cout << arr_res[i] << "*x^" << i;
                firstTerm = false;
            }
        }
        cout << endl;
    }
    return 0;
}
