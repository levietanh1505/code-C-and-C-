#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n) {
    int check = 0;
    for (int i = 0; i < n - 1; ++i) {
        check = 0;
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
               check = 1;
            }
        }
        // In ra mỗi bước sau khi hoán đổi
        if (check == 1){
            printf("Buoc %d: ", i + 1);
            for (int k = 0; k < n; ++k) {
                printf("%d ", arr[k]);
            }
            printf("\n");
            check = 0;
        }
        
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);

    return 0;
}
