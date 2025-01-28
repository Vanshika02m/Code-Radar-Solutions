#include <stdio.h>

int main(){
    int a,b,op;
    scanf("%d %d",&a,&b,&op);
    if(op==+){
        printf("%d %d %d",(a+b));
    }
    else if(op==/){
        printf("%d %d",a/b);
    }
    else if(op==*){
        printf("%d %d",a*b);

    }
    else if(op==-){
        printf("%d %d",a-b);
    }
    else{
        printf("Error");
    }

    
}