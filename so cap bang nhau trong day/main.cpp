// đếm số cặp số bằng nhau có trong dãy//
#include <bits/stdc++.h>
using namespace std;

int main(){

	int arr[99999], n;
	//nhap so phan tu trong mang//
	cin>>n;

	//luu phan tu vao mang//
	for (int i = 0; i < n; i++) cin>> arr[i]; 

	sort(arr, arr + n);
	
    int S = 0;
	
	for (int i = 0; i < n; i++){
	    int static dem = 0 ; 
		if (arr[i] == arr[i + 1]) dem += 1;
		if (arr[i] == arr[i + 1] && arr[i + 1] != arr[i + 2]){
			S += dem * (dem + 1) / 2;
			dem = 0;
		}
	}
	
	cout << S;
}