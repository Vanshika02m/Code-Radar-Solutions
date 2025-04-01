#include<stdio.h>
int main(){
    int n,nst=1;
    scanf("%d",&n);
    for(int i=1i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=1;j<=nstlj++){
            printf("*");
        }
        printf("\n");
    }
}