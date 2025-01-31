#include <stdio.h>

int main(){
    char ch;
    scanf("%c",&ch);
    for(char i='A';i<=ch;i++){
        for(char j='A';j<=ch+1-i;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
}