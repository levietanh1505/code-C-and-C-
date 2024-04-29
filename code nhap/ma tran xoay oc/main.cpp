#include <stdio.h>

int main() {
    int T; // Số bộ test
    scanf("%d", &T);

    for (int test_case = 1; test_case <= T; ++test_case) {
        int N; // Kích thước ma trận
        scanf("%d", &N);
        int matrix[N][N]; // Ma trận

        // Tạo ma trận xoáy ốc ngược
        int num = N * N;
        int top = 0, bottom = N - 1, left = 0, right = N - 1;

        while (num >= 1) {
            // Fill the top row from left to right
            for (int i = left; i <= right; ++i) {
                matrix[top][i] = num--;
            }
            top++;

            // Fill the rightmost column from top to bottom
            for (int i = top; i <= bottom; ++i) {
                matrix[i][right] = num--;
            }
            right--;

            // Fill the bottom row from right to left
            for (int i = right; i >= left; --i) {
                matrix[bottom][i] = num--;
            }
            bottom--;

            // Fill the leftmost column from bottom to top
            for (int i = bottom; i >= top; --i) {
                matrix[i][left] = num--;
            }
            left++;
        }

        // Hiển thị ma trận
        printf("Test %d:\n", test_case);
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
