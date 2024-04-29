#include <stdio.h>
#include <string.h>
#include <stdbool.h>


#define MAX_SIZE 1000

int main(){
    char str[MAX_SIZE][MAX_SIZE];
    int size = 0;

    while (scanf("%s", str[size]) != EOF) {
        size++;
    }
    size --;

    int max_length = 0;
    for (int i = 0; i < size; i++) {
        max_length = (strlen(str[i]) > max_length) ? strlen(str[i]) : max_length;
    }

    char str_res[MAX_SIZE][MAX_SIZE];
    for (int i = 0; i <= size; i ++){
        if (strlen(str[i]) == max_length){
            bool check;
            int count = 0;
            for (int j = 0 ; j <= size; j ++){
                check = true;
                if (strcmp(str[i], str[j]) == 0 && j < i) {
                    check = false;
                    break;
                }
                if(strcmp(str[i], str[j]) == 0) count ++;
            }
            if (check = true && count != 0)
                printf("%s %d %d\n", str[i], strlen(str[i]), count);
        }
        //EXIT:
    }
    return 0;
}
