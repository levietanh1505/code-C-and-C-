#include <stdio.h>

// Hàm tính số Fibonacci thứ n
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        int a = 0, b = 1, c;
        for (int i = 2; i <= n; ++i) {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
}

int main() {
    int N; // Kích thước ma trận
    scanf("%d", &N);

    int matrix[N][N]; // Ma trận
    int num = 0; // Số Fibonacci thứ num

    int top = 0, bottom = N - 1, left = 0, right = N - 1;

    while (top <= bottom && left <= right) {
        // Fill the top row from left to right
        for (int i = left; i <= right; ++i) {
            matrix[top][i] = fibonacci(num++);
        }
        top++;

        // Fill the rightmost column from top to bottom
        for (int i = top; i <= bottom; ++i) {
            matrix[i][right] = fibonacci(num++);
        }
        right--;

        // Fill the bottom row from right to left
        for (int i = right; i >= left; --i) {
            matrix[bottom][i] = fibonacci(num++);
        }
        bottom--;

        // Fill the leftmost column from bottom to top
        for (int i = bottom; i >= top; --i) {
            matrix[i][left] = fibonacci(num++);
        }
        left++;
    }

    // Hiển thị ma trận
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
