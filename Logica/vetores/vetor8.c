#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int nums[8]= {1,2,3,4,5,6,7,8};
    int pares = 0;

    for(int i = 0; i < 8; i++){
        if(nums[i] % 2 == 0){pares++;}
    }
    printf("Há %d números pares no Vetor nums", pares);

    return 0;
}