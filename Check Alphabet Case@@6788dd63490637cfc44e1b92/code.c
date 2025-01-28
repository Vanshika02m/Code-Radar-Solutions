#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch=='A'|| ch=='B'){
        printf("Uppercase");
    }
    else if(ch=='z'|| ch=='a'){
        printf("Lowercase");
    }
    else{
        printf("Not an aplhabet");
    }
}