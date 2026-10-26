#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    for(int i = 1; i <= 4; i++){

        for(int j = 1; j <= 2; j++){

            printf("%d %d", i,j);
            
        }
        

    }






    return 0;
}