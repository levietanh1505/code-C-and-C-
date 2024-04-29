/*
Có  bạn nhỏ ở vương quốc Mely muốn đi chơi đu quay, và nhiệm vụ của bạn là sắp xếp chỗ ngồi cho mỗi bạn nhỏ ấy.
Mỗi chỗ ngồi trên đu quay có thể ngồi được 1 hoặc 2 bạn nhỏ, và ngoài ra tổng trọng lượng tại mỗi vị trí không được vượt quá . Giả sử bạn biết cân nặng của từng bạn nhỏ.
Số chỗ ngồi tối thiểu cần thiết cho các bạn nhỏ là bao nhiêu?
5 10
8 9 2 3 7
Sample Output:
*/
#include <bits/stdc++.h>

using namespace std;

// Hàm tìm kiếm giá trị lớn nhất mà nhỏ hơn giá trị target nhớ là right để là arr.size() - 2 để tránh tìm lộn giá trị ban đầu là target;
int binary_search(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 2;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] <= target) {
            result = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}
int main(){
    int SizeArr, MaxVollume;
    cin >> SizeArr >> MaxVollume;
    vector<int> Arr(SizeArr);

    for (int i = 0; i < SizeArr; i++) {
        cin >> Arr[i];
    }
    sort(Arr.begin(), Arr.end());
    int count = 0;

    while (!Arr.empty()){
        int index = Arr.size();
        int pos = binary_search (Arr, MaxVollume - Arr.at(index - 1));

        if (pos != -1){
            Arr.erase(Arr.begin()+ pos);
            Arr.pop_back(); // popback nên để sau hàm erase để tránh trường hợp lỗi thưc thi khi Arr.size() = 1
        }
        else Arr.pop_back();

        count += 1;
    }
    cout << count;
    return 0;
}