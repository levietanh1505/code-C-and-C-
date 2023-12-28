#include <stdio.h>
#include <math.h>
void check (int n){
    int demnt = 0; // biến đếm số lượng ước nguyên tố
    int dem = 0; //biến số mũ ứng với ước nguyên tố

    for (int i = 2; i <= sqrt (n); i ++){
        
        if (n % i == 0) demnt ++;

        while (n % i == 0){
            dem += 1;
            n /= i;
        }
    }

    // n > 1 và demnt = 2 thì demnt tăng thêm 1 thành 3

    if (n > 1){
        demnt ++;
        dem ++;
    }

    if (dem == 3 && demnt == 3){
        printf ("true");
    } 
    else printf ("false"); 
}      
    
int main(){
    int T;
    scanf ("%d", &T);
    while (T --){
        int n;
        scanf ("%d", &n);
        check (n);
        printf ("\n");
    }
}