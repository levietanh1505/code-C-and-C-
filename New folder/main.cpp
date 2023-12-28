#include <bits/stdc++.h>
using namespace std;

void tanxuat(int arr[], int n, int a[]){
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

void tinhgian(int arr[], int n, int a[]){
    for (int i = 0; i < n; i++){
		for (int k = i + 1; k < n; k++){
			if (a[i] == 0) break;
			if (arr[i] == arr[k]) a[k] = 0;
		}
	}    
}

//void xoaphantu0(int a[], int n ){
//    int null = 0;
//	for (int i = 0; i < n; i++){
//		if (a[i] == 0) null+=1;
//	}
//	
//    int b[99999], k = 0;
//	for (int i = null; i < n ; i++){
//	    b[k] = a[i];
//		k+=1;
//	}
//}

int main(){
	int n, arr[99999], a[9999];
	cin >> n;

	for (int i = 0; i < n; i++) cin >> arr[i];

	tanxuat(arr, n, a);
    tinhgian(arr, n, a);
	
	sort (a, a + n);

    int null = 0;
	for (int i = 0; i < n; i++){
		if (a[i] == 0) null+=1;
	}
	
    int b[99999], k = 0;
	for (int i = null; i < n ; i++){
	    b[k] = a[i];
		k+=1;
	}
	
	for (int i = 0; i < n - null; i++){
	    cout<< b[i]<<" ";
	}
}
