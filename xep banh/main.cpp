#include <stdio.h>

int sumcake (int n){
    int sum = 0, sumtemp = 0;
    


    for (int i = 1; i <= n; i ++){
        sumtemp += i;
        sum += sumtemp;
    }

    return sum;
}

int main (){
    int n;
    scanf ("%d", &n);

    int i = 1;
    while (sumcake(i) <= n) ++i;

    printf ("%d", i - 1);
}

