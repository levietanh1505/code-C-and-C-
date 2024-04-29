/*Tí là một người rất thích các số đẹp. Các số đẹp của Tí được định nghĩa như sau.
Tí có  danh sách chữ số phân biệt. Một số nguyên được gọi là đẹp nếu biểu diễn cơ số 
của số đó có ít nhất 1 chữ số từ danh sách đầu tiên và ít nhất 1 chữ số từ danh sách thứ 2
Tí yêu cầu các bạn tìm số nguyên dương đẹp nhỏ nhất.

Input Format
Dòng đầu tiên chứa 2 số nguyên m và n độ dài của dãy thứ nhất và độ dài của dãy thứ 2.
Dòng thứ 2 chứa m chữ số riêng biệt các phần tử của dãy thứ nhất.
Dòng thứ 3 chứa n chữ số riêng biệt các phần tử của dãy thứ hai.
In ra số nguyên đẹp nhỏ nhất.

Sample Input 
4 4
1 2 3 8
5 6 7 8
Sample Output
8

Sample Input
2 2
1 5
3 4
Sample Output
13
*/

#include <bits/stdc++.h>
using namespace std;

int main (){
    int a, b, arr1[10], arr2[10];
    cin >> a >> b;
    
    for (int i = 0; i < a; i ++) cin >> arr1[i];
    for (int i = 0; i < b; i ++) cin >> arr2[i];
    sort(arr1, arr1 + a);
    sort(arr2, arr2 + b);
    
    int result1 = min(arr1[0], arr2[0]) * 10 + max(arr1[0], arr2[0]); //kết quả trường hợp 1
    
    bool check_trung_so = false; // biến để check xem trường hợp 2 có đúng ko
    int result2 = 10;
    for (int i = 0; i < a; i ++){
        for (int j = 0; j < b; j ++){
            if(arr1[i] == arr2[j]){
                result2 = (arr1[i] < result2) ? arr1[i] : result2;
                check_trung_so = true;
                break;
            }
        }
    }
    
    cout << ((check_trung_so == true) ? result2 : result1);
}