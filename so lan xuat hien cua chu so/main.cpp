#include <iostream>

using namespace std;

int count_digits(int A, int B) {
  /*
    Đếm số lần xuất hiện của mỗi chữ số từ 0 đến 9 trong đoạn từ A đến B.

    Args:
      A: Số đầu tiên của đoạn.
      B: Số cuối cùng của đoạn.

    Returns:
      10 số nguyên, là tần số xuất hiện của các chữ số từ 0 đến 9.
  */

  // Khởi tạo mảng đếm tần số.
  int counts[10] = {0};

  // Duyệt qua tất cả các số từ A đến B.
  for (int i = A; i <= B; i++) {
    // Lấy giá trị của mỗi chữ số.
    for (int j = 0; j < to_string(i).length(); j++) {
      counts[to_string(i)[j] - '0']++;
    }
  }

  // Trả về kết quả.
  return *counts;
}

int main() {
  // Nhập số lượng bộ test.
  int T;
  cin >> T;

  // Duyệt qua tất cả các bộ test.
  for (int i = 0; i < T; i++) {
    // Nhập hai số nguyên A và B.
    int A, B;
    cin >> A >> B;

    // Đếm số lần xuất hiện của mỗi chữ số.
    int counts = count_digits(A, B);

    // In kết quả.
    for (int j = 0; j < 10; j++) {
      cout << counts[j] << " ";
    }
    cout << endl;
  }

  return 0;
}
