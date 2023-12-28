/* Đề bài:
Bạn hãy tìm thừa số nguyên tố có số mũ lớn nhất của số nguyên N, 
nếu có nhiều thừa số nguyên tố có cùng số mũ lớn nhất hãy chọn số nhỏ hơn. 
Ví dụ:
intput: N = 60 = 2^2 * 3^1 * 5^1 
thì đáp án sẽ là 2 2 (in cơ số trước rồi in số mũ sau)*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N;
    cin >> N;

    int maxmu = 0, mincoso = N; // maxmu: mũ lớn nhất, mincoso: cơ số bé nhất trong trường hượp có 2 cơ số có số mũ bằng nhau và lớn nhất

    for (int i = 2; i <= sqrt (N); i ++){
        int demmu = 0;

        if (N % i == 0){
            while (N % i == 0){
                demmu += 1;
                N = N / i;
            }
        }
        
        if (demmu > maxmu){
            maxmu = demmu;
            mincoso = i;
        }
        else if (demmu == maxmu){
            mincoso = min (mincoso, i);
        }
    }

    if (maxmu == 0) cout << N <<" "<< 1; // trường hợp N là số nguyên tố tức maxmu bằng 0
    else cout << mincoso <<" "<< maxmu;
}