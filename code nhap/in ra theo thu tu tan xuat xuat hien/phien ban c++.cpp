// Cho một mảng một chiều. Hãy viết chương trình thực hiện đếm tần suất xuất hiện của các phân tử phân biệt trong mảng và liệt kê các phần tử theo thứ tự tăng dần của tần suất xuất hiện.
// In: Hai hàng: hàng đầu số phần tử của mảng; hàng tiếp theo là các phần tử của màng - các phần tử lân cận cách nhau một dấu cách.
// Output: Hai hàng: hàng đầu liệt kê các phần tử của mảng vào được liệt kê theo thứ tự tăng dần của tần suất xuất hiện của các phần tử; hàng thứ hai là tần suất xuất hiện của các phần tử tương ứng với thứ tự tăng dần. Các phần tử cách nhau một dấu cách.
// Ví dụ:
// In:
// 10
// 3 1 2 5 4 4 1 3 4 2
// Out:
// 5 1 2 3 4
// 1 2 2 2 3

//  Nhớ nghĩ cách tối ưu lại code bên dưới và cả code về chuẩn hóa liên quan đến hàm strtok và hàm stringstream
#include <bits/stdc++.h>
using namespace std;

vector <pair<int, int>> arr_freq; // hãy thử lại bằng trường pair kết hợp vector

map <int, int> mp; // Dùng map để làm mảng đánh dấu key với tần xuất xuất hiện là vallue
multimap <int, int> mp_res; //Dùng multimap để lưu lại value và key của map mp trước đó


int main(){
    // Tạo map đánh dấu
    int size; cin >> size;
    for(int i = 0;  i < size; i ++){
        int n; cin >> n;
        mp[n] ++;
    }

    // Lưu lại vào multimap mp_res với thứ tự value và key của map mp
    for (pair<int, int> it : mp) {
        mp_res.insert(make_pair(it.second, it.first));
    }

    // In giá trị theo thứ tự tăng dần của tần xuất
    for (auto it : mp_res){
        cout << it.second << " ";
    }
    cout << endl;

    // In tần suất
    for (auto it : mp_res){
        cout << it.first << " ";
    }
}