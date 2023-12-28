/*
Cho dãy số A[] gồm có N phần tử. Ở mỗi thao tác bạn có thể tăng các phần tử trong mảng lên 1 lượng là d đơn vị,
hãy xác định số thao tác tối thiểu sao cho mảng trở thành một dãy tăng chặt.
Ví dụ dãy 1 2 3 7 8 là một dãy tăng chặt, nhưng dãy 1 2 2 7 8 không phải là một dãy tăng chặt. 
Ví dụ với mảng ban đầu là 1 3 3 2 và d = 2, ta cần thực hiện thao tác thứ nhất thêm d vào phần tử thứ 3 trong mảng, 
mảng trở thành 1 3 5 2, ta tiếp thục thực hiện 2 thao tác thêm d vào phần tử thứ 4, mảng trở thành dãy tăng chặt là 1 3 5 6

Input Format
Dòng đầu tiên là số nguyên N và số d. Dòng tiếp theo gồm N số nguyên A[i]

Constraints
1≤ N, d ≤ 10^4; 0 ≤ A[i] ≤ 10^6

Output Format
In ra số thao tác tối thiểu cần thực hiện để biến mảng thành dãy tăng chặt.

Sample Input 
3 3
15 17 9

Sample Output 
3
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N, d, dem = 0;
    cin >> N >> d;
    long long arr[N];

    for (long long i = 0; i < N; i ++) cin >> arr[i]; // Nhập mảng

    for (long long i = 0; i < N - 1; i ++){
        int solantang = 0;// biến đếm số lần tăng tối thiểu 

        if (arr[i + 1] <= arr[i]){
            solantang = (arr[i] - arr[i + 1]) / d + 1; 

            dem += solantang; //cập nhật tổng số lần tăng tối thiểu

            arr[i + 1] += solantang * d; // cập nhật giá trị sau cùng 
        }
    }

    cout << dem << endl;
}