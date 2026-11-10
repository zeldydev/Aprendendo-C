#include <stdio.h>

int main(){

    int matriz[3][3] = {
        {5,10,15},
        {20,25,30},
        {35,40,45}
    };
    int soma = 0;

    for(int i =0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            soma += matriz[i][j];
        }
    }

    printf("%d", soma);


    return 0;
}