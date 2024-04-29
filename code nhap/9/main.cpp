#include <stdio.h>
typedef struct{
    int MaSo;
    char Ten[50];
    float Gia;
} SanPham;

void ThemSanPham(SanPham *sp, int *n) {
    printf("Nhap Ma So san pham moi: ");
    scanf("%d", &sp[*n].MaSo);
    printf("Nhap Ten san pham moi: ");
    fflush(stdin);
    gets(sp[*n].Ten);
    printf("Nhap Gia san pham moi: ");
    scanf("%f", &sp[*n].Gia);
    (*n)++;
}
void SuaSanPham(SanPham *sp, int n) {
    int maSo;
    printf("Nhap Ma So san pham can sua: ");
    scanf("%d", &maSo);

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (sp[i].MaSo == maSo) {
            printf("Nhap Ten san pham moi: ");
            fflush(stdin);
            gets(sp[i].Ten);
            printf("Nhap Gia san pham moi: ");
            scanf("%f", &sp[i].Gia);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Ma So san pham khong ton tai.\n");
    }
}
void SapXepBangGia(SanPham *sp, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (sp[i].MaSo > sp[j].MaSo) {
                SanPham temp = sp[i];
                sp[i] = sp[j];
                sp[j] = temp;
            }
        }
    }
}
void XuatDuLieu(SanPham *sp, int n) {
    printf("\n%-10s %-30s %-10s\n", "Ma So", "Ten", "Gia");
    for (int i = 0; i < n; i++) {
        printf("%-10d %-30s %-10.2f\n", sp[i].MaSo, sp[i].Ten, sp[i].Gia);
    }
}

int main() {
    SanPham sp[100];
    int n = 0;

    int choice;
    do {
        printf("\nMENU\n");
        printf("1. Them san pham moi.\n");
        printf("2. Sua san pham.\n");
        printf("3. Sap xep bang gia va in.\n");
        printf("4. Thoat.\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                ThemSanPham(sp, &n);
                break;
            case 2:
                SuaSanPham(sp, n);
                break;
            case 3:
                SapXepBangGia(sp, n);
                XuatDuLieu(sp, n);
                break;
            case 4:
                break;
            default:
                printf("Lua chon khong hop le.\n");
        }
    } while (choice != 4);

    return 0;
}
