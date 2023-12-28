#include <stdio.h>
#include <math.h>
int main(){
	int n,i,j,k;
	scanf("%d",&n);
	k=(n-3)/4;
	for(i = k;i > 0;i--){
		for(j =1;j<=n;j++){
			if(( j > i && j <= n/2+1-i)||(j>n/2+i&&j<=n-i)){
				printf("*  ");
			}
			else printf("   ");
		}
		printf("\n");
	}
	for(i=1;i<=n/2-k+1;i++){
		for(j=1;j<=n;j++){
			printf("*  ");
		}
		printf("\n");
	}
	k=1;
	for(i=1;i<=n/2;i++){
		for(j=1;j<=n;j++){
			if(j>k&&j<n-k+1)printf("*  ");
			else printf("   ");
		}
		printf("\n");
		k++;
	}
	printf("\n");
	for (int i = 1; i <= n/2-2;i++){
		printf("   ");
	}
	printf("I LOVE PROPTIT!");
	return 0;
}