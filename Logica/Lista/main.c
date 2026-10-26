#include <stdio.h>

int main(){
 int x = 10;
 int y = 20;
 int *p = &x;
 printf("%d\n", *p);
 p = &y;
 printf("%d\n", *p);
 *p = 50;
 printf("%d %d\n", x, y);
 return 0;
}