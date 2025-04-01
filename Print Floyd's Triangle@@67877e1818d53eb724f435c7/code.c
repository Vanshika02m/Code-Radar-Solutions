#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int num=0;
    for(int i=1;i<=n;i++){
        printf("%d ",num);
        num++;
    }
    printf("\n");
}