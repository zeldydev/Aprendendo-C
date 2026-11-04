#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int nums[5] = {1,2,3,4,5};

    printf("%d", nums[2]); // imprimir o terceiro elemento



    return 0;
}