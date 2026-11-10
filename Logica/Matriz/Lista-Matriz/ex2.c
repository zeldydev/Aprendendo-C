#include <stdio.h>

int main(){

    int matriz[3][2] = {
        {5,10},
        {15,20},
        {25,30}
    };

    for(int i =0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }


    return 0;
}