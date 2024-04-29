#include <bits/stdc++.h>

using namespace std;

int main (){
    FILE *f, *f2;

    f = fopen ("input.txt", "r");
    int n;
    int sum = 0;

    while (fscanf (f, "%d", &n) != -1){
        sum += n;
    }

    f2 = fopen ("output.txt", "a");
    for (int i = 1; i < 10000; i ++){
        fprintf (f2, "%d\n", i);
    }
    

    

}