#include <stdio.h>
#include <stdlib.h>
struct sinhvien {
    char hoten[50];
    char ngaysinh[50];
    float diem1;
    float diem2;
    float diem3;
    float tongdiem;
};
int main (){
    int t;
    scanf("%d", &t);
    
    sinhvien arr[t];

    for (int i = 0; i < t; i ++){
        getchar();
        gets(arr[i].hoten);
        gets(arr[i].ngaysinh);
        scanf ("%f %f %f", & arr[i].diem1, &arr[i].diem2, &arr[i].diem3);
        arr[i].tongdiem = arr[i].diem1 + arr[i].diem2 + arr[i].diem3;
    }
    float max = 0;
    for (int i = 0; i < t; i ++){
        max = (arr[i].tongdiem > max) ? arr[i].tongdiem : max;
    }

    for (int i = 0; i < t; i ++){
        if (arr[i].tongdiem == max){
            printf("%d %s %s %.1f", i + 1, arr[i].hoten, arr[i].ngaysinh, arr[i].tongdiem);
            printf("\n");
        }
    }
}