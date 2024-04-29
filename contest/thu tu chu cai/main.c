#include <stdio.h>
#include <string.h>

int main() {
    long long N;
    scanf("%lld", &N); 
    getchar();
    char str;
    while (N--) {
        long long M;
        scanf("%lld", &M); 
        getchar();
        char sequence[M];
        for (int i = 0; i < M; i ++){
            scanf ("%c", &sequence[i]);
        } 

        int isAlphabetOrder = 1; 

        for (long long i = 1; i < M; ++i) {
            if (strcmp(&sequence[i], &sequence[i - 1]) < 0) {
                isAlphabetOrder = 0; 
                break;
            }
        }

        if (isAlphabetOrder) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
}
