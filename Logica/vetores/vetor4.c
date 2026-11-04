#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float notas[3] = {7.0,8.5,9.0};

    for(int i = 0; i < 4; i++){
        printf("%d", notas[i]);
    }


    return 0;
}