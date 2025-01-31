#include <stdio.h>

int main(){
    char n;
    scanf("%c",&n);
    for(char i='A';i<=n;i++){
        for(char j='A';j<=n+1-(i-'A');j++){
            printf("%c ",j);
        }
        printf("\n");
    }
}