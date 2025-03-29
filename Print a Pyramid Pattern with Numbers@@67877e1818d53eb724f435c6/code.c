#include<stdio.h>
int main(){
    int n,nst=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=1;j<=nst;j++){                   //11
            printf("%d ",j);
        }
        printf("\n");
        nst+=1;
        
    }
    
}