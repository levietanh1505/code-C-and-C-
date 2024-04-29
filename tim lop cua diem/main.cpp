#include <stdio.h>
#include <math.h>

// Định nghĩa cấu trúc cho một điểm dữ liệu
struct Point {
    float x;
    float y;
    int _class;
};

// Hàm tính khoảng cách Euclid giữa hai điểm
float euclidean_distance(float x1, float y1, float x2, float y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

// Hàm tìm lớp của điểm kiểm tra
void find_class(float x1, float y1, int k, struct Point dataset[], int M) {
    // Mảng để lưu trữ khoảng cách và chỉ số lớp của từng điểm trong dataset
    struct DistanceClass {
        float distance;
        int _class;
    } distances[M];

    // Tính khoảng cách từ điểm kiểm tra tới mỗi điểm trong dataset
    for (int i = 0; i < M; i++) {
        distances[i].distance = euclidean_distance(x1, y1, dataset[i].x, dataset[i].y);
        distances[i]._class = dataset[i]._class;
    }

    // Sắp xếp các khoảng cách theo thứ tự tăng dần
    for (int i = 0; i < M - 1; i++) {
        for (int j = i + 1; j < M; j++) {
            if (distances[i].distance > distances[j].distance) {
                struct DistanceClass temp = distances[i];
                distances[i] = distances[j];
                distances[j] = temp;
            }
        }
    }

    // Đếm số lượng các lớp trong k điểm gần nhất
    int class_count[11] = {0}; // Mảng để đếm số lượng của mỗi lớp, tối đa là 10 lớp (từ 1 đến 10)
    for (int i = 0; i < k; i++) {
        class_count[distances[i]._class]++;
    }

    // Tìm lớp có số lượng nhiều nhất trong k điểm gần nhất
    int max_count = 0;
    for (int i = 1; i <= 10; i++) {
        if (class_count[i] > max_count) {
            max_count = class_count[i];
        }
    }

    // In ra các lớp có số lượng nhiều nhất
    for (int i = 1; i <= 10; i++) {
        if (class_count[i] == max_count) {
            printf("%d ", i);
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);

    // Duyệt qua từng bộ testcase
    for (int t = 0; t < N; t++) {
        float x1, y1;
        int k, M;
        scanf("%f %f %d %d", &x1, &y1, &k, &M);

        // Đọc dataset
        struct Point dataset[M];
        for (int i = 0; i < M; i++) {
            scanf("%f %f %d", &dataset[i].x, &dataset[i].y, &dataset[i]._class);
        }

        // Tìm và in ra lớp của điểm kiểm tra
        find_class(x1, y1, k, dataset, M);
        printf("\n");
    }

    return 0;
}
