#include <stdio.h>

typedef struct PhanSo{
    int TuSo;
    int MauSo;
} PhanSo;

int gcd(int a, int b){
    if (b == 0) return a;
    return gcd(b, a % b);
}

int lcm(int a, int b){
    return a * b / gcd(a, b);
}

void RutGonPhanSo(PhanSo* x){
    int UocChung = gcd(x->TuSo, x->MauSo);
    x->TuSo /= UocChung;
    x->MauSo /= UocChung;
}

void TongPhanSo(PhanSo x, PhanSo y){
    PhanSo sum;
    sum.TuSo = x.TuSo * y.MauSo + y.TuSo * x.MauSo;
    sum.MauSo = x.MauSo * y.MauSo;
    RutGonPhanSo(&sum);

    InPhanSo(sum);
}

void QuiDongPhanSo(PhanSo x, PhanSo y){
    RutGonPhanSo(&x);
    RutGonPhanSo(&y);
    int MauChung = lcm(x.MauSo, y.MauSo);
    x.TuSo = x.TuSo * MauChung / x.MauSo;
    x.MauSo = MauChung;
    y.TuSo = y.TuSo * MauChung / y.MauSo;
    y.MauSo = MauChung;
    InPhanSo(x);
    printf (" ");
    InPhanSo(y);
}

void ThuongPhanSo(PhanSo x, PhanSo y){
    PhanSo Thuong = {x.TuSo * y.MauSo, x.MauSo * y.TuSo};
    RutGonPhanSo(&Thuong);
    InPhanSo(Thuong);
}

void NhapPhanSo(PhanSo* x){
    scanf ("%d %d", &x->TuSo, &x->MauSo);
}

void InPhanSo(PhanSo x){
    printf("%d/%d\n", x.TuSo, x.MauSo);
}

int main(){
    int T; scanf("%d", &T);

    for (int i = 1; i <= T; i ++){
        printf ("Case #%d:\n", i);
        PhanSo a, b;
        NhapPhanSo(&a);
        NhapPhanSo(&b);

        QuiDongPhanSo(a, b);
        printf ("\n");
        TongPhanSo(a, b);
        printf ("\n");
        ThuongPhanSo(a,b);
        printf ("\n");
    }
}
