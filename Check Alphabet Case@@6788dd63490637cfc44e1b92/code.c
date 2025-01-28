#include <stdio.h>
int main(){
    char ch;
    scanf("%d",&ch);
    if(ch=='A'){
        printf("Uppercase");
    }
    else if(ch=='z'){
        printf("Lowercaase");
    }
    else{
        printf("Not an alphabet");
    }