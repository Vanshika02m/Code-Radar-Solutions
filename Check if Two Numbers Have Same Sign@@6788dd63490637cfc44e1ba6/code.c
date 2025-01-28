#include <stdio.h>

int main(){
    int a,b;
    scanf("5d %d",&a,&b);
    if(a>0 && b>0){
        printf("Same Sign");
    }
    else if(a<0 && b<0){
        printf("Same Size");
    }
    else{
        printf("Different sign");
    }
}