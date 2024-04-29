/*
Hano có một dãy gồm n số 0 và một dãy gồm m số nguyên dương. Cô ấy muốn biến dãy n thành dãy m thông qua hai thao tác sau:
+Thao tác 1: Tăng giá trị của 1 phần tử bất kỳ trong dãy thêm 1 đơn vị.
+Thao tác 2: Nhân cả dãy với 2.
Hãy tìm số thao tác ít nhất để biến dãy n thành dãy m

Input
-Dòng đầu nhập số bộ test T(1≤T≤100)
-Những dòng tiếp theo đưa vào T bộ test. Mỗi bộ test gồm:
+Dòng đầu tiên nhập số n (1≤n≤10^3), (n=m).
+Dòng thứ hai đưa vào m số nguyên dương a[i] của dãy m (0≤a[i]≤103).

Output
Đưa ra kết quả mỗi test theo từng dòng.
Example
input
2
3
16 16 16
2
2 3
output
7
4
Tóm lại là đưa 1 dãy về 0 chỉ với hai thao tác: chia cả dãy cho 2 hoặc trừ một số bất kì cho 1
*/


#include <stdio.h>

// hàm check xem mang đã về 0 chưa (tất cả các phần tử về 0 chưa)
bool checkmang (int a[], int n){
    for (int i = 0; i < n; i ++){
        if (a[i] != 0) return false;
    }
    return true;
}

// thao tác chia tất cả các phần tử của mảng cho 2
void thaotac1 (int a[], int n){
    for (int i = 0; i < n; i ++) a[i] /= 2;
}

int main (){
    int T;
    scanf ("%d", &T);

    while (T --){
        int n, m;
        scanf ("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i ++) scanf ("%d", &arr[i]);

        int count = 0; // biến đếm số lần biến đổi 
        //check điều kiện xem mảng đã về 0 chưa
        while (checkmang (arr, n) == false){
            for (int i = 0; i < n; i ++){
                if (arr[i] % 2 == 1) {
                    // nếu lẻ thì trừ đi 1, biến count tăng thêm 1 lần
                    arr[i] -= 1; 
                    count += 1;
                }
            }

            // Trước tiên phảo check mảng đó xem nó đã về 0 chưa, nếu mà đã về 0 rồi thì không thực hiện thao tác chia nữa
            if (checkmang (arr, n) == false){
                thaotac1 (arr, n);
                count += 1;
            }
        }
        printf ("%d\n", count);
    }

    return 0;
}