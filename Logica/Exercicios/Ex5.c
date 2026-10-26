#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    for(int i = 1; i <= 20; i ++){

        if(i % 3 == 0){continue;}

        printf("%d", i);
    }


    return 0;
}