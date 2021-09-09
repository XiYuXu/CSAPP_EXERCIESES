#include <stdio.h>

typedef unsigned char* pointer;

void show_bytes(pointer p,size_t size){
    for(size_t i=0;i<size;i++){
        printf("%.2x",p[i]);
    }
}

int main(){
    int temp = 1;
    show_bytes((pointer)&temp,sizeof(int));
    return 0;
}