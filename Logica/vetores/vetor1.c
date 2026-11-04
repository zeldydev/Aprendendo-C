#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int idades[5] = {10,20,30,40,50};

    for(int i = 0;i < 5; i ++){
        printf("%d\n", idades[i]);
    }
    



    return 0;
}