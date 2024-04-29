#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); // insert
    cin.tie(0); // insert
    int T;
    cin >> T;

    while (T--) {
        int size_arr;
        cin >> size_arr;

        // Sử dụng vector thay cho mảng cố định
        vector<int> arr(size_arr);
        
        // Tính trung bình của mảng
        int average = 0;
        for (int i = 0; i < size_arr; ++i) {
            cin >> arr[i];
            average += arr[i];
        }
        average /= size_arr;

        // Kiểm tra và cập nhật các giá trị không thỏa mãn yêu cầu
        bool check = true;
        for (int i = size_arr - 1; i >= 0; --i) {
            if (arr[i] > average) {
                cout << "NO\n";
                check = false;
                break;
            }
            else if (arr[i] < average) {
                for (int j = i - 1; j >= 0; --j) {
                    int delta = average - arr[i];
                    if (arr[j] == average){
                        arr.erase(arr.begin() + j);
                        -- i;
                    }
                    else if (arr[j] > average) {
                        int excess = arr[j] - average;
                        if (excess >= delta) {
                            arr[i] = average;
                            arr[j] -= delta;
                            break;
                        }
                        else {
                            arr[i] += excess;
                            arr[j] = average;
                            arr.erase(arr.begin() + j);
                            -- i;
                            delta -= excess;
                        }

                    }
                }
                if (arr[i] != average) {
                    cout << "NO\n";
                    check = false;
                    break;
                }
            }
        }
        if (check) {
            cout << "YES\n";
        }
    }

    return 0;
}
