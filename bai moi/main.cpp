// hàm đếm số lần xuất hiện mỗi phần tử trong một mảng
#include <bits/stdc++.h>
using namespace std;

void tanso(int arr[], int n, int a[]){


	for (int i = 0; i < n; i++){
		a[i] = 0;
		
		for (int k = 0; k < n; k++){
			if (arr[i] == arr [k] && k < i ){
			a[i] = a[k];
			break;
			}
			if (arr[i] == arr[k]) a[i] += 1;
		}
	}
}

int main(){
	int n, arr[99999], a[99999];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];
	
	cout << "Mang ban dau la:     ";
	for (int i = 0; i < n; i++) cout << arr[i] << " ";
	cout << endl;
	
	tanso(arr, n, a);
	
	cout << "Tan so xuat hien la: ";
	for (int i = 0; i < n; i++){
		cout << a[i] << ' ';
	}
    return 0;
}
