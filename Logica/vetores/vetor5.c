#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int nums[6] = {10,20,30,40,50,60};

    for(int i = 0; i < 6; i++){
        printf("%d", nums[i]);
    }

    return 0;
}