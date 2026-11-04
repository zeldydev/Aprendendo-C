#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int nums[5] = {1,2,3,4,5};

    for(int i = 4; i >= 0; i--){
        printf("%d\n", nums[i]);
    }



    return 0;
}