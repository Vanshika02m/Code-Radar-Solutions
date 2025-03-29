#include<stdio.h>
int main(){
    int n;
    scan("%d",&n);
    for(int i=1;i<=n;i++){
        char ch='A'+i-1;
        for(int j='A'j<=ch;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
}