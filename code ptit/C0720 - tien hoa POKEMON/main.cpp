#include <stdio.h>
#include <limits.h>
#include <string.h>
//định nghĩa 
struct pokemon{
    char name[100];
    int K;
    int M;
    int so_lan_tien_hoa;
};
int main(){
    int N; scanf("%d", &N);
    struct pokemon pokemons[N];
    
    for (int i = 0; i < N; i ++){
        pokemons[i].so_lan_tien_hoa = 0;
        getchar();
        gets(pokemons[i].name);
        scanf("%d %d", &pokemons[i].K, &pokemons[i].M);
    }

    for (int i = 0; i < N; i ++){
        while (pokemons[i].M >= pokemons[i].K){
            pokemons[i].M -= pokemons[i].K;
            pokemons[i].so_lan_tien_hoa ++;
            pokemons[i].M +=2;
        }
    }

    int index_max = 0;
    int max_tien_hoa = INT_MIN;
    for (int i = 0; i < N; i ++){

        if(pokemons[i].so_lan_tien_hoa > max_tien_hoa){
            index_max = i;
            max_tien_hoa = pokemons[i].so_lan_tien_hoa;
        }
    }

    int sum_so_lan_tien_hoa = 0;
    for (int i = 0; i < N; i ++){
        sum_so_lan_tien_hoa += pokemons[i].so_lan_tien_hoa;
    }

    printf ("%d\n", sum_so_lan_tien_hoa);
    printf("%s",pokemons[index_max].name);
}