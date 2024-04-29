// #include <iostream>

// using namespace std;
// int main(){
//     int n;int sum = 0;
//     while (true){
        
//         int check = 0;
//         cin >> n;
//         switch (n){
//             case 1:
//                 cout << "nhap m = " << endl;
//                 int m;
//                 cin >> m;
//                 sum += m;
                
//                 break;
//             case 0:
//                 check = 1;
//                 break;
//             case 2: 
//                 cout << sum << endl;
//                 break;
//         }
//         if (check == 1) break;
//     }
// }

// Các chức năng:
// 1. Thêm sản phẩm mới vào vị trí cuối
// 2. Sửa sản phẩm theo Mã số
// 3. Sắp xếp Bảng giá theo thứ tự tăng dần của Mã số và in bảng giá
// Input:
// - Dòng thứ nhất là lựa chọn chức năng thực hiện
// - Dòng thứ hai:
// + Nếu lựa chọn ở dòng thứ nhất là 1 thì nhập số sản phẩm sẽ thêm mới
// + Nếu lựa chọn ở dòng thứ nhất là 2 thì nhập mã số sản phẩm sẽ sửa
// - Dòng tiếp theo là thông tin sản phẩm:
// + mã số
// + Tên
// + giá
// Chức năng 3 là kết thúc input
// Output:
// - Nếu lựa chọn là 1 thì in ra số sản phẩm được thêm
// - Nếu lựa chọn là 2 thì in ra mã số sản phẩm được sửa
// - Nếu lựa chọn là 3 thì sắp xếp và in ra danh sách:
//     <mã số> <Tên> <giá>

#include <stdio.h>
#include <stdlib.h>

// Tạo cấu trúc sản phẩm
typedef struct{
    int MaSo;
    char Ten[100];
    int Gia;
} SanPham;

// Hàm đọc dữ liệu vào mảng cấu trúc sản phẩm
void ReadInputToArr (SanPham *SP){
        scanf ("%d", &SP -> MaSo);
        getchar(); // Đọc các kí tự thừa đằng trước để đọc chuỗi kí tự
        gets(SP -> Ten);
        scanf ("%d", &SP -> Gia);
}

// Hàm xuất mảng cấu trúc
void WriteArr (SanPham *SP, int size){
    for (int i = 0; i < size + 1; i ++){
        printf ("%d %s %d\n", SP[i].MaSo, SP[i].Ten, SP[i].Gia);
    }
}

// Hàm cmp bổ trợ cho qsort để sắp xếp mảng cấu trúc
int cmp(const void *a, const void *b) {
    SanPham *A = (SanPham *)a;
    SanPham *B = (SanPham *)b;
    return A->MaSo - B->MaSo; // Sắp xếp theo tăng dần mã số
}

// Lựa chọn 2: sửa và in ra mã bị sửa
void selection_2 (SanPham *SP, int *size){
    int FixProduct;
    scanf("%d", &FixProduct);
    
    for (int i = 0; i < *size; i ++){
        if (SP[i].MaSo == FixProduct){
            ReadInputToArr (&SP[i]);
        }
    }
    printf ("%d\n", FixProduct);
}

// Lựa chọn 1: Thêm sản phẩm và in ra số sản phẩm thêm vào
void selection_1 (SanPham *SP, int *size){
    int AddSize; // Số sản phẩm thêm vào
    scanf ("%d", &AddSize);

    for (int i = 0; i < AddSize; i ++){
        *size += i; // Lấy chỉ số phục vụ cho việc đọc dữ liệu
        ReadInputToArr (&SP[*size]);
    }
    printf ("%d\n", AddSize);
    size ++; // Cập nhật lại kích thước mảng cấu trúc
}   

// Lựa chọn 3: Sắp xếp lại mảng cấu trúc và in ra, kết thúc chương trình luôn
void selection_3 (SanPham *SP, int *size){
    qsort (SP, *size + 1, sizeof(SanPham), cmp);
    WriteArr(SP, *size);
}

int main(){
    // Khởi tạo mảng cấu trúc
    SanPham SP[10000];
    int size = 0; // kích thước mảng ban đầu
    int selection;
    
    // Dùng vòng lặp do while đọc dữ liệu vào trước sau đó mới kiểm tra lại sau
    do{
        scanf ("%d", &selection);
        // Kết hợp cấu trúc switch case để lọc seclection
        switch (selection){
            case 1:
                selection_1(SP, &size);
                break;
            case 2:
                selection_2(SP, &size);
                break;
            case 3:
                // Khi selection == 3 thì sẽ bị break ra khỏi vòng lặp sau đó nó sẽ bị kiểm tra lại điều kiện
                selection_3(SP, &size);
                break;
        }
    } while(selection != 3);

    return 0;
}