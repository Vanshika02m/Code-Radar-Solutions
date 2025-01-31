#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==2){
        printf("**\n");
        printf("**");
    }
    if(n==3){
        printf("***\n");
        printf("* *\n");
        printf("***\n");
    }
    if(n==4){
        printf("****\n");
        printf("****\n");
        printf("****\n");
        printf("****\n");
    }
}