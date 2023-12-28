#include <stdio.h>

int main(){
    int T;
    scanf ("%d", &T);

    while (T --){
        int m, n;
        int arr[100][100];
        int arrcp[100][100];

        scanf ("%d %d", &n, &m);

        for (int i = 0; i < n; i ++){
            for (int j = 0; j < m; j ++){
                scanf ("%d", &arr[i][j]);
                arrcp[i][j] = arr[i][j];
            }
        }
        
        for (int i = 0; i < n; i ++){
            for (int j = 0; j < m; j ++){
                if (arrcp[i][j] == 1){
                    for (int k = 0; k < m; k ++) arr[i][k] = 1;
                    for (int h = 0; h < n; h ++) arr[h][j] = 1;
                }
            }
        }

        for (int i = 0; i < n; i ++){
            for (int j = 0; j < m; j ++)
                printf ("%d ",arr[i][j]);

                printf("\n");
            }

        printf ("\n");
    }
    
    return 0;
}