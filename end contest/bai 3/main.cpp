/*
Shano có một cửa hàng bánh mì nho nhỏ.
Hàng ngày cô phải nướng n cái bánh mì để bán cho khách hàng, mỗi bánh mì có hai mặt và mỗi lần nướng chỉ nướng được một mặt. 
Shano có một cái máy nướng bánh có thể nướng được k cái bánh cùng một lúc. Mỗi lần nướng một mặt bánh thì sẽ tốn 5 phút.
Vậy Shano cần phải tốn ít nhất bao nhiêu phút để chờ cái máy nướng hết n cái bánh mì ?
Giới hạn:

Subtask 1: 25% test có 1≤T≤10, 1≤n,k≤100
Subtask 2: 50% test có 10≤T≤90, 100≤n,k≤800
Subtask 3: 25% test có 90≤T≤100, 800≤n,k≤103
Input
Dòng đầu nhập vào số bộ test T (1≤T≤100)
Mỗi bộ test gồm hai số nguyên n, k (1≤n,k≤10^3).

Output
Gồm T dòng ứng với mỗi bộ test:
Mỗi dòng đưa ra số phút ít nhất để nướng hết n cái bánh mì

Example
inputCopy
2
8 4
6 4
outputCopy
20
15
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int T;
    scanf ("%d", &T);

    while (T --){
        int n, k;
        scanf ("%d %d", &n, &k);

        int result = 0;
        int sum1 = n / k;

        if (n % k == 0){
            printf ("%d\n", sum1 * 2 * 5);
        }
        else if (n < k) printf ("10\n");
        else{
            int du = n - sum1 * k;
            int lan1 = sum1 - 1;
    
                result += lan1 * 10 + 5;

                if (2 * du <= k) result += 10;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
                else result += 3 * 5;

                printf ("%d\n", result);
            }
    }
}