/*Trong một buổi sinh hoạt CLB, Long đố Thành 1 câu hỏi như sau:
Cho một mảng có N phần tử, hỏi tích lớn nhất của 2 phần tử trong mảng là bao nhiêu? Các bạn hãy giúp Thành trả lời câu hỏi này nhé!
Input
Dòng đầu tiên là 1 số tự nhiên N 
Dòng tiếp theo là N số nguyên Aicủa mảng (−10^6≤Ai≤10^6).

Giới hạn:
Subtask 1: 70% test có 2≤N≤1000.
Subtask 2: 30% test có 2≤N≤10^6.

Output
In ra giá trị lớn nhất tính được.
Example
inputCopy
5
1 2 3 4 5
outputCopy
20
*/

#include <stdio.h>
#include <stdlib.h>
int cmp (const void *a, const void *b){
    return *(int *)a - *(int *)b;
}
int main (){
    int N;
    scanf ("%d", &N);
    long long arr[N];
    for (int i = 0; i < N; i ++) scanf ("%lld", &arr[i]);
    qsort (arr, N, sizeof(long long), cmp);

    long long max1 = arr[0] * arr[1];
    long long max2 = arr[N - 1] * arr[N - 2];

    long long maxtich = (max1 > max2) ? max1 : max2;

    printf ("%lld", maxtich);
}