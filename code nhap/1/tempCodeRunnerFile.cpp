#include <stdio.h>
#include <limits.h>
#include <string.h>
typedef pokemon{
    char name[100];
    int K;
    int M;
    int so_lan_tien_hoa = 0;
};
int main(){
    int N; scanf("%d", &N);
    pokemon pokemon[N];
    
    for (int i = 0; i < N; i ++){
        getchar();
        gets(pokemon[i].name);
        scanf("%d %d", &pokemon[i].K, &pokemon[i].M);
    }

    for (int i = 0; i < N; i ++){
        while (pokemon[i].M >= pokemon[i].K){
            pokemon[i].M -= pokemon[i].K;
            pokemon[i].so_lan_tien_hoa ++;
            pokemon[i].M +=2;
        }
    }

    int index_max = 0;
    int max_tien_hoa = INT_MIN;
    for (int i = 0; i < N; i ++){
        // max_tien_hoa = (pokemon[i].so_lan_tien_hoa > max_tien_hoa) ? pokemon[i].so_lan_tien_hoa : max_tien_hoa;
        // index_max = (pokemon[i].so_lan_tien_hoa > max_tien_hoa) ? i : index_max;

        if(pokemon[i].so_lan_tien_hoa > max_tien_hoa){
            index_max = i;
            max_tien_hoa = pokemon[i].so_lan_tien_hoa;
        }
    }

    int sum_so_lan_tien_hoa = 0;
    for (int i = 0; i < N; i ++){
        sum_so_lan_tien_hoa += pokemon[i].so_lan_tien_hoa;
    }



    printf ("%d\n", sum_so_lan_tien_hoa);
    printf("%s",pokemon[index_max].name);

    
}