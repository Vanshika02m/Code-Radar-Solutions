#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if((a>=18 && b==1 ||b==0)){
        printf("Eligile");
    }
    else{
        printf("Not Eligible");
    }
}