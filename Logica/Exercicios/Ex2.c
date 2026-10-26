#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    for(int i = 1; i <=10; i++){
        
        if(i == 5){
            continue;
        }

        printf("%d\n", i);
        
    }


    return 0;
}