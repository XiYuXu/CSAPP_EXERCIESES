#include <stdio.h>

void print(int x,int y){
    printf("%.6x", (0xff & x) + (~0xff & y));
}

int main(){
    int x = 0xEDCFAAAB;
    int y = 0x12345678;
    print(x, y);
    return 0;
}