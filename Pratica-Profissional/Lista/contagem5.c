#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    for( int i = 0; i <= 100; i += 5){
        printf(" %d \n", i);
    }




    return 0;
}