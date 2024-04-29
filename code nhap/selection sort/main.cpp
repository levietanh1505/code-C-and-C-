#include <stdio.h>

// Hàm để hoán đổi hai phần tử
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Hàm sắp xếp mảng theo thuật toán chọn
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Tìm phần tử nhỏ nhất trong mảng chưa sắp xếp
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Hoán đổi phần tử nhỏ nhất với phần tử đầu tiên chưa sắp xếp
        swap(&arr[minIndex], &arr[i]);

        // In ra mảng sau mỗi bước sắp xếp
        for (int k = 0; k < n; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    selectionSort(A, n);

    return 0;
}
