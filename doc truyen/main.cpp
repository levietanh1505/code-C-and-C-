/*
c: số trang sách của quyển ngôn tình
v0: tốc độ đọc ban đầu
v1: tốc độ đọc tối đa
a: tốc độ đọc nhanh
l: số trang đọc lại
*/
#include <stdio.h>

int so_trang_ngay_thu_i (int i, int v0, int v1, int a, int l){

    int trang_them = v0 + (i - 1) * a - l;
    int trang_tong = v0 + (i - 1) * a;
    //ngày đầu i = 1 tương ứng đọc v0 trang
    if (i == 1){
        return v0;
    }
    // số trang max đọc được là v1, nên chỉ đọc được v1 trang 1 ngày
    if (trang_tong >= v1){
        return v1 - l;
    }
    // trường hợp ngược lại 
    return trang_them;
}

int main (){
    int c, v0, v1, a, l;
    scanf ("%d %d %d %d %d", &c, &v0, &v1, &a, &l);
    int i = 0;

    while (c > 0) {
        i += 1;
        c = c - so_trang_ngay_thu_i (i, v0, v1, a, l);
        
    }
    printf ("%d", i);
}