#include <stdio.h>

int main(){
    char n;
    scanf("%c",&n);
    for(int i='A',i<=n;i++){
        for(int j='A',j<=i;j++){
            printf("%c ",j);
        }
        printf("\n");
    }

}