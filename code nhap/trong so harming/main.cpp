#include <stdio.h>

// Hàm tính trọng số Hamming của một số nguyên dương m
int hammingWeight(int m) {
    int weight = 0;

    // Duyệt qua từng bit của số m
    while (m > 0) {
        // Kiểm tra bit cuối cùng của m
        if (m & 1) {
            weight++; // Nếu là bit 1, tăng trọng số lên 1
        }
        // Dịch phải số m để xét bit tiếp theo
        m >>= 1;
    }

    return weight;
}

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; ++i) {
        int m;
        scanf("%d", &m);

        // In ra trọng số Hamming của số m
        printf("%d\n", hammingWeight(m));
    }

    return 0;
}
