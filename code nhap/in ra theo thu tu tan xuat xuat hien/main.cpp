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
#include <stdio.h>
#include <stdlib.h>
int freq[1000000], max_freq, min_freq;
int cmp (const void* a, const void* b){
    return *(int *)a - *(int *) b;
}

int main(){
    int size; scanf("%d", &size);
    int arr[size];
    for(int i =0;  i < size; i ++){
        scanf ("%d", &arr[i]);
        freq[arr[i]] ++;
        max_freq = (freq[arr[i]] > max_freq) ? freq[arr[i]] : max_freq;
        // min_freq = (freq[arr[i]] < min_freq) ? freq[arr[i]] : min_freq;
    }
    qsort (arr, size, sizeof(int), cmp);

    int arr_freq[10000] = {0}, size_arr_freq = 0;
    for (int i = 1; i <= max_freq; i ++){
        for (int j = 0; j < size; j ++){
            if (freq[arr[j]] == i){
                printf ("%d ",arr[j]);
                arr_freq[size_arr_freq ++] = i;
                freq[arr[j]] = 0;
            } 
        }
    }
    printf("\n");
    for (int i = 0; i < size_arr_freq; i ++){
        printf("%d ", arr_freq[i]);
    }

}