// Đề bài: đếm số từ có trong chuỗi 

#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int dem = 0;

    fgets(str, sizeof(str) + 1, stdin);

    for (int i = 0; i < strlen(str); ){
        if (str[i] != ' '){
            dem ++;

            while(str[i] != ' ' && i < strlen(str)) ++ i;
        }
        else{
            i ++;
        }f
    }
    printf ("%d", dem);
}
