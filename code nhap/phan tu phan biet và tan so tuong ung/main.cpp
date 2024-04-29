// Cho một mảng hai chiều. Hãy viết chương trình thực hiện đếm tần suất xuất hiện của các phần tử phân biệt trong mảng.
// In: Hàng đầu gồm hai số là kích thước hàng và cột của ma trận các số nguyên vào; các hàng tiếp lần lượt là các hàng của ma trận; các phần tử cách nhau một dấu cách.
// Out: Hai hàng: hàng đầu liệt kê các phần tử riêng biệt của mảng; hàng thứ hai là dãy giá trị tần suất tương ứng các phần tử.
// Ví dụ:
// In:
// 3 3
// 5 2 9
// 4 8 6
// 2 5 6
// Out:
// 2 4 5 6 8 9
// 2 1 2 2 1 1
#include <stdio.h>
#include <stdlib.h>
// hàm so sánh cmp
int cmp (const void* a, const void* b){
    return *(int *)a - *(int *)b;
} 
int main (){
    // khởi tạo dữ liệu, ép mảng hai chiều về một chiều
    int row, collum;
    scanf("%d %d", &row, &collum);
    int size = row * collum;
    int arr[size];
    for (int i = 0; i < size; i ++) scanf ("%d", &arr[i]);
    
    // sắp xếp lại mảng để in số phân biệt
    qsort (arr, size, sizeof(int), cmp);
     
    // In ra các số phân biệt theo thứ tự từ bé đến lớn
    int current = arr[0]; // biến current là giá trị phân biệt mới nhất được tìm thấy
    printf ("%d ", arr[0]);
    for (int i = 1; i < size; i ++){
        if (arr[i] != current){
            current = arr[i]; // cập nhật curent khi tìm được giá trị mới khác current trước đó
            printf ("%d ", current);
        }
    }
    printf ("\n");

    //In ra tần xuất xuất hiện tương ứng
    int count = 1; // biến đếm tần xuất
    current = arr[0];
    for (int i = 1; i < size; i ++){
        // nếu arr[i] khác current thì in ra count, ở đây count là tần xuất của giá trị trước đó, không phải giá trị hiện tại
        if (arr[i] != current){
            printf ("%d ", count); 
            current = arr[i];
            count = 1; // reset lại biến count = 1 để đếm tần xuất giá trị tiếp theo
        }
        // arr[i] == current thì tăng biến count lên 1
        else{
            count ++;
        }
        //Do biến count là biến đếm tần xuất của giá trị trước đó nên phải viết thêm in ra count của phần tử cuối
        if (i == size - 1) printf ("%d ", count);
    }
    return 0;
}