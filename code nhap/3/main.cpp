#include <stdio.h>

int main(){
	int T; scanf ("%d", &T);

	while (T --){
		int M, N; scanf ("%d %d", &M, &N); int arr[M][N], arr_cp[M][N];
		int i, j;
		for (i = 0; i < M; i ++)
			for (j = 0; j < N; j ++)
			scanf("%d", &arr[i][j]);
			arr_cp[i][j] = arr[i][j];

		for (i = 0; i < M, i ++){
			for (j = 0; j < N; j ++){
				if (arr[i][j] == 1 || arr[i][j] == 2){
					
				}
			}
		}



	}
}