#include <stdio.h>
#include <math.h>
#include <string.h>

void result(char str[]){
    for (int i = 0; i < strlen(str); i++)
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    int k;
    for (k = strlen(str); k >=0; k --){
        if (str[k] == ' '){
            k += 1;
            break;
        }
    }
	int i = 0;
    while (i < k){
        if ((i == 0 || str [i - 1] == ' ') && str[i] != ' '){
            printf("%c", str[i]);
            i ++;
        }
        else i ++;
    }
    for (int i = k; i < strlen(str); i++){
        printf("%c",str[i]);
    }
    puts("@ptit.edu.vn");
}
int main(){
	char str[50];
    gets(str);
    result(str);
	return 0;
}