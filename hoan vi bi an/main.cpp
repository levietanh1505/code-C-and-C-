/*
Cho 1 hoán vị độ dài n đuợc miêu tả bởi n số nguyên dương pi
Do bất cẩn Bob đã đánh mất hoán vị ban đầu, điều duy nhất Bob nhớ đó là các giá tri pi−pi−1|i=2,3,...
Nhiệm vụ của bạn là giúp Bob tìm ra hoán vị ban đầu.
Input
Dòng đầu tiên gồm số nguyên duơng n.
Dòng thứ 2 gồm n−1 số nguyên duơng qi miêu tả hiệu 2 số liên tiếp trong hoán vị.

Input đảm bảo :
1≤n≤10^5
1−n≤qi≤n−1
Output
In ra trên một dòng hoán vị ban đầu.
Nếu không tồn tại hoán vị nào thỏa mãn in ra -1.

Example
inputCopy
3
-2 1
outputCopy
3 1 2 
*/

// hoán vị có độ dài n là tập hoán vị các số từ 1 đến n
// bài này là mảng hiệu, cộng dồn mảng hiệu ta sẽ được mảng bản ban đầu, nên nhiệm vụ là ta sẽ đi tìm phần tử đầu tiên trong dãy 
//(chú ý kiểm tra các điều kiện lúc sau để tránh dính bẫy)
#include <stdio.h>
#include <stdlib.h>

int cmp (const void *a, const void *b){
    return *(int *)a -*(int *)b;
}

int main (){
    long long n;
    scanf ("%lld", &n);
    long long a[n];
    a[0] = 0;
    long long arrsum[n];
    arrsum[0] = a[0];
    long long sum = 0;

    for (long long i = 1; i < n; i ++){
        scanf ("%lld", &a[i]);
        //thiết lập mảng cộng dồn arrsum
        sum += a[i];
        arrsum[i] = sum;
    } 

    //tìm min max mảng cộng dồn
    long long max = a[0];
    long long min = a[0];
    for (long long i = 0; i < n; i ++){
        max = (arrsum[i] > max) ? arrsum[i] : max;
        min = (arrsum[i] < min) ? arrsum[i] : min;
    }

    // max - min phải bằng n - 1 thì mới đúng
    if (max - min != n - 1) printf ("-1");
    else {
        // check điều kiện của các phần tử
        long long first = n - max;
        if (first < 1 || first > n) {
            printf ("-1");
            return 0;
        }
        for (long long i = 0; i < n; i ++){
            if (first + arrsum[i] > n || first + arrsum[i] < 1){
                printf ("-1");
                return 0;
            }
        }

        //check điều kiện trong dãy không được phép có bất kì 2 phần tử nào giống nhau

        int arrsumcp[n];
        for (int i = 0; i < n; i ++){
            arrsumcp[i] = arrsum[i];
        }
        qsort (arrsumcp, n, sizeof (int), cmp);
        for (int i = 0; i < n; i ++){
            if (arrsumcp[i] == arrsumcp[i + 1]){
                printf("-1");
                return 0;
            }
        }
        
        // int arrdanhdau[10000] = {0};

        // for (int i = 0; i < n; i ++){
        //     arrdanhdau[arrsum[i]] += 1;
        //     printf ("%d ", arrdanhdau[arrsum[i]]);
        // }

       // in mảng khi điều kiện tất cả thỏa mãn
        for (long long i = 0; i < n; i ++){
            printf ("%lld ", first + arrsum[i]);
        }
    }
}


/*

 8  7  6  5  4  3  2  1
 0 -1 -1 -1 -1 -1 -1 -1
 0 -1 -2 -3 -4 -5 -6 -7


 5  7  8  6  4  1  2  3
 0  2  1 -2 -2 -3  1  1
 0  2  3  1 -1 -4 -3 -2


 0 -2  1
 0 -2 -1


*/