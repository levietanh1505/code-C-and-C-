#include <stdio.h>
#include <stdlib.h>

int main (){
    int x1, y1, x2, y2, x3, y3, x4, y4;
    scanf ("%d %d %d %d", &x1, &y1, &x2, &y2);

    if (x1 == x2 || y1 == y2){
        int denta_x = y2 - y1;
        int denta_y = x1 - x2;

        x3 = x1 + denta_x;
        y3 = y1 + denta_y;
        x4 = x2 + denta_x;
        y4 = y2 + denta_y;

        printf ("%d %d %d %d", x3, y3, x4, y4);
        return 0;
    }
   
    // chú ý kiểu dữ liệu trong phép chia (nên để tử, mẫu, kết quả ở dạng float)
    float denta_x = y2 - y1;
    float denta_y = x1 - x2;
    float he_so_goc = - denta_x / denta_y;
    if (he_so_goc != 1 && he_so_goc != -1){
        printf ("-1");
        return 0;
    }

    x4 = (x1 + x2 + denta_x) / 2;
    y4 = (y1 + y2 + denta_y) / 2;

    x3 = x1 + x2 - x4;
    y3 = y1 + y2 - y4;

    printf ("%d %d %d %d", x3, y3, x4, y4);
    return 0;
}   