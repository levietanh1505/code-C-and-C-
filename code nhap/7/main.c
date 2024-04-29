// Cho một mảng một chiều. Hãy viết chương trình thực hiện đếm tần suất xuất hiện của các phân tử phân biệt trong mảng và liệt kê các phần tử theo thứ tự tăng dần của tần suất xuất hiện.

// In: Hai hàng: hàng đầu số phần tử của mảng; hàng tiếp theo là các phần tử của mảng - các phần tử lân cận cách nhau một dấu cách.

// Output: Hai hàng: hàng đầu liệt kê các phần tử của mảng vào được liệt kê theo thứ tự tăng dần của tần suất xuất hiện của các phần tử; hàng thứ hai là tần suất xuất hiện của các phần tử tương ứng với thứ tự tăng dần. Các phần tử cách nhau một dấu cách.

// Ví dụ:
// In:
// 10
// 3 1 2 5 4 4 1 3 4 2
// Out:
// 5 1 2 3 4
// 1 2 2 2 3
#include <stdio.h>
#include <limits.h>
int freq[100000];
int main(){
    int size; scanf ("%d", &size); int arr[size]; int max_freq = 0;
    for (int i = 0; i < size; i ++) {
        scanf("%d", &arr[i]);
        freq[arr[i]] ++;
        max_freq = (freq[arr[i]] > max_freq) ?  freq[arr[i]] : max_freq;
    }

    int current = 1;
    for (int i = 1; i < max_freq; i ++){
        for (int i = 0; i < size; i ++){
            if (freq[arr[i]] == i){
                printf("%d ", arr[i]);
            }
        }
    }

}