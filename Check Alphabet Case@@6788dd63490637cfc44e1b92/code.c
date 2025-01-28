#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch=='A'){
        printf("Uppercase");
    }
    else if(ch=='z'){
        printf("Lowercase");
    }
    else{
        printf("Not an aplhabet");
    }
}