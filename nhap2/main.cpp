#include <stdio.h>
#include <stdlib.h>

//Hàm làm tròn lên, chú ý là nếu trong số bị chia bé hơn bằng 0 thì return 0
int ceill(int a, int b){
    if (a <= 0) return 0;
    if (a % b == 0) return a /b;
    else return a/b + 1;    
}

int main(){
    // Nhập chiều dài đường, số lượng đèn, độ dài chiếu sáng mỗi đèn
    int LenghtOfStreet, QuantityOfLamp , LengthLightOfLamp; scanf ("%d %d %d",  &LenghtOfStreet, &QuantityOfLamp, &LengthLightOfLamp);
    
    // Nhập tọa độ những điểm có bóng đèn
    int ListPointLight[QuantityOfLamp];
    for (int i = 0; i < QuantityOfLamp; i++) scanf ("%d", &ListPointLight[i]);
    
    // Tính tổng số điểm cần lắp đèn bằng tổng số điểm tối liên tiếp trên một vùng và chia cho số điểm có thể chiếu sáng bởi một cái đèn
    int TotalAdding = 0;
    for (int i = 0; i < QuantityOfLamp - 1; i++){
        // Tính số diểm hiện đang bị tối
        int TotalPointDark = (ListPointLight[i + 1] - ListPointLight[i]) - 1 - 2 * LengthLightOfLamp;
        // Tính số điểm mà một chiếc đèn có thể chiếu sáng ra sung quanh
        int TotalPointLightOfLamp = 2 * LengthLightOfLamp + 1;
        // Tổng số đèn cần thêm bằng phép chia làm tròn lên của số điểm tối chia cho 2 lần độ dài chiếu sáng của đèn và cộng thêm 1
        TotalAdding += ceill(TotalPointDark, TotalPointLightOfLamp);
    }

    // Cộng thêm số đèn cần thêm để đảm bảo chiếu sáng cho phần đầu đường và cuối đường
    TotalAdding += ceill(ListPointLight[0] - LengthLightOfLamp - 1, 2 * LengthLightOfLamp + 1);+ ceill(LenghtOfStreet - ListPointLight[QuantityOfLamp - 1] - LengthLightOfLamp, 2 * LengthLightOfLamp + 1);
    
    printf ("%d", TotalAdding);
}