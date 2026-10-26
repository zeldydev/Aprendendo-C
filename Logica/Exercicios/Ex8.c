#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num, num2;
    num = 0;
    num2 = 67;

    while(num <= 100){
        printf("Num: %d\n", num);
        if(num == num2){
            break;
        }
        num++;
    }




    return 0;
}