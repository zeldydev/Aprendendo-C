#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int matriz[3][3];

    matriz[0][0] = 2;
    matriz[0][1] = 4;
    matriz[0][2] = 6;
    matriz[1][0] = 8;
    matriz[1][1] = 10;
    matriz[1][2] = 12;
    matriz[2][0] = 14;
    matriz[2][1] = 16;
    matriz[2][2] = 18;

    printf("%d", matriz[1][1]);



    return 0;
}