// Với hai véc-tơ nhị phân (được ký hiệu là một tổ hợp nhị phân) cùng độ dài n,
//khoảng cách Hamming giữa chúng được xác định bởi tổng số các vị trí tương ứng giữa chúng khác nhau (so sánh lần lượt các vị trí giữa các véc-tơ, nếu tại vị trí so sánh mà bít giữa hai véc-tơ mà khác nhau thì đếm, nếu giống nhau thì không đếm). Ví dụ với hai tổ hợp 101 và 100 thì khoảng cách Hamming giữa chúng bằng 1 (do chỉ có vị trí cuối cùng tương ứng giữa hai tổ hợp khác nhau.
// Xét một tập C các véc-tơ nhị phân chiều dài n. Người ta định nghĩa khoảng cách Hamming tối thiểu là giá trị tối thiểu khoảng cách Hamming giữa hai véc-tơ nhị phân phân biệt trong C (có thể hiểu là tìm tất cả các khoảng cách giữa các véc-tơ phân biệt, trong các khoảng cách đó khoảng cách nào tối thiểu thì đó là khoảng cách Hamming tối thiểu.
// Viết chương trình tìm khoảng cách Hamming tối thiểu cho một tập C các véc-tơ nhị phân.
// Input: Dòng đầu là số bộ testcase (N). N dòng tiếp theo là các bộ test. Dữ liệu mỗi bộ test gồm số đầu tiên cho biết số véc-tơ trong tập, số thứ hai cho biết độ dài mỗi véc-tơ nhị phân, và các tổ hợp còn lại là các véc-tơ nhị phân của bộ test.
// Output: Kết quả khoảng cách Hamming tối thiểu tương ứng với mối bộ testcase.
// Minh họa dữ liệu testcase
// Input	
// 1
// 4 2 00 01 11 10
// Output
// 1
#include <stdio.h>
#include <stdlib.h>


int hammingDistance(char *vec1, char *vec2, int n) {
    int distance = 0;
    for (int i = 0; i < n; ++i) {
        if (vec1[i] != vec2[i]) {
            distance++;
        }
    }
    return distance;
}

// Hàm tìm khoảng cách Hamming tối thiểu cho tập C các véc-tơ nhị phân
int minHammingDistance(char **vectors, int numVectors, int vectorLength) {
    int minDistance = vectorLength; // Khởi tạo khoảng cách tối thiểu là độ dài của một véc-tơ
    for (int i = 0; i < numVectors - 1; ++i) {
        for (int j = i + 1; j < numVectors; ++j) {
            int distance = hammingDistance(vectors[i], vectors[j], vectorLength);
            if (distance < minDistance) {
                minDistance = distance;
            }
        }
    }
    return minDistance;
}

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; ++i) {
        int numVectors, vectorLength;
        scanf("%d %d", &numVectors, &vectorLength);

        
        char **vectors = (char **)malloc(numVectors * sizeof(char *));
        for (int j = 0; j < numVectors; ++j) {
            vectors[j] = (char *)malloc((vectorLength + 1) * sizeof(char)); 
            scanf("%s", vectors[j]);
        }

       
        int minDistance = minHammingDistance(vectors, numVectors, vectorLength);

       
        printf("%d\n", minDistance);

       
        for (int j = 0; j < numVectors; ++j) {
            free(vectors[j]);
        }
        free(vectors);
    }

    return 0;
}
