/*
Cho một dãy a gồm N phần tử, tìm hai dãy con có tổng lớn nhất:
1. Dãy con gồm các phần tử liên tiếp (vị trí liên tiếp) --> dùng cộng dòn (ngầm hiểu)
2. Dãy con gồm các phần tử không cần thiết phải liên tiếp ---> sắp xếp lại hàm sau đó cộng các số > 0 lại,
nếu không có số >0 thì ta in ra số lớn nhất của dãy

Dãy con phải có số lượng phần tử ≥ 1
Hãy in ra tổng lớn nhất của 2 loại dãy con.

Input
Dòng đầu là số N (N <= 10^5)
Dòng tiếp theo gồm các số ai(−10^5≤ai≤10^5)

Output
Một dòng duy nhất ghi tổng lớn nhất của 2 lại dãy con, 2 số cách nhau 1 dấu cách.
Số đầu tiên là tổng của dãy con liên tiếp, số còn lại là kết quả của trường hợp còn lại.
*/

/*
Hàm qsort trong C như sau:
#include <stdlib.h>
int cmp (const void * a, const void * b){
    return *(int *)a - *(int *)b;
}
qsort (arr, n, sizeof (int), cmp);
*/

#include <stdio.h>
#include <stdlib.h>

long long max1 (long long arr[], int n){
    long long maxtemp = arr[0];
    long long max = arr[0];

    for (int i = 1; i < n; i ++){
        maxtemp = (maxtemp + arr[i] > arr[i]) ? maxtemp + arr[i] : arr[i];
        max = (maxtemp > max) ? maxtemp : max;
    }

    return max;
}

long long max2 (long long arr[], int n){
    long long sum = 0;

    for (int i = 0; i < n; i ++){
        if (arr[i] >= 0){
            for (int k = i; k < n; k ++) sum += arr[k];
            return sum;
        }
    }

    return arr[n - 1];
}

int cmp (const void *a, const void *b){
    return *(int *)a - *(int *)b;
}

int main (){
    int n;
    scanf ("%d", &n);
    long long arr[n];

    for (int i = 0; i < n; i ++) scanf ("%lld", &arr[i]);
    long long result1 = max1(arr, n);

    qsort (arr, n, sizeof(long long), cmp);
    long long result2 = max2(arr, n);

    printf ("%lld %lld", result1, result2);
    return 0;
}