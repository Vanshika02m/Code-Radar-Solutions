#include <stdio.h>

int main(){
    char n;
    scanf("%d",&n);
    for(char i='A';i<=n;i++){
        for(char j='A';j<=i;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
}           