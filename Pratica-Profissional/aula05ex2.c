#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int i;

    for(i = 1; i <= 20; i++){
        if( i % 2 == 0){
            printf("%d\n", i);
        }
    }



    return 0;
}