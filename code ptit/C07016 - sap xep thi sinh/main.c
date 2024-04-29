#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct thisinh {
    int stt;
    float diem_1, diem_2, diem_3;
    float diem_tong;
    char ngay_sinh[100], name[100];
};

// Hàm so sánh cho qsort
int cmp(const void *a, const void *b) {
    struct thisinh *thi_sinh_a = (struct thisinh *)a;
    struct thisinh *thi_sinh_b = (struct thisinh *)b;
    // Sắp xếp theo tổng điểm giảm dần
    if (thi_sinh_a->diem_tong < thi_sinh_b->diem_tong) return 1;
    if (thi_sinh_a->diem_tong > thi_sinh_b->diem_tong) return -1;
    // Nếu tổng điểm bằng nhau, sắp xếp theo số thứ tự tăng dần
    return thi_sinh_a->stt - thi_sinh_b->stt;
}

int main() {
    int N;
    scanf("%d", &N);
    getchar(); // Loại bỏ ký tự '\n'

    // Nhập dữ liệu
    struct thisinh arr_thi_sinh[N + 2];
    for (int i = 0; i < N; i++) {
        arr_thi_sinh[i].stt = i + 1;
        gets(arr_thi_sinh[i].name);
        gets(arr_thi_sinh[i].ngay_sinh);
        scanf("%f%f%f", &arr_thi_sinh[i].diem_1, &arr_thi_sinh[i].diem_2, &arr_thi_sinh[i].diem_3);
        arr_thi_sinh[i].diem_tong = arr_thi_sinh[i].diem_1 + arr_thi_sinh[i].diem_2 + arr_thi_sinh[i].diem_3;
        getchar(); // Loại bỏ ký tự '\n' sau scanf
    }

    qsort(arr_thi_sinh, N, sizeof(struct thisinh), cmp);

    for (int i = 0; i < N; i++) {
        printf("%d %s %s %.1f\n", arr_thi_sinh[i].stt, arr_thi_sinh[i].name, arr_thi_sinh[i].ngay_sinh, arr_thi_sinh[i].diem_tong);
    }

    return 0;
}
