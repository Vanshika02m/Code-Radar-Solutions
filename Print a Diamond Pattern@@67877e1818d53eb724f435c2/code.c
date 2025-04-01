#include<stdio.h>
int main(){
    int n,nst=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        nst+=2;
        printf("\n");
    }
    nst-=4;
    for(int i=n;i>=1;i--){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=i-1;j<=nst;j++){
            printf("*");
        }
        nst-=2;
        printf("\n");
    }
}