#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int nums[4] = {20,30,50,45};

    for(int i = 0;i < 4; i ++){
        printf("%d\n", nums[i]);
    }

    return 0;
}