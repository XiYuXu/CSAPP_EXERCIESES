#include<stdio.h>
int main(){
    int temp = 1;
    unsigned char *p = (unsigned char *)&temp;
    if(*p){
        printf("小端\n");
        return 1;
    }else{
        printf("大端\n");
        return 0;
    }
    return 0;
}