#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int CheckFullNum(char *Str){
    int Arr[10] = {0};

    if (Str[0] == '0') return -1;
    for (int i = 0; i < strlen(Str); i ++){
        if (!isdigit(Str[i])) return -1;

        int num = Str[i] - '0';
        Arr[num] += 1;
    }

    for (int i = 0; i < 10; i ++){
        if (Arr[i] == 0) return 0;
    }

    return 1;
}    
int main(){
    int Test; scanf ("%d", &Test);
    getchar();
    
    while (Test --){
       
        char Str[10000];
        gets(Str);

        //printf ("%s\n", Str);
        if (CheckFullNum(Str) == -1) printf ("INVALLID\n");
        else if (CheckFullNum(Str) == 1) printf ("YES\n");
        else printf("NO\n");
    }       
}
