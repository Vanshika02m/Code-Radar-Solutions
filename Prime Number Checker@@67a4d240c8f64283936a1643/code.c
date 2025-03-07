
#include<stdio.h>
int isPrime(int n){
    if(n<=1){
        return n;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;

}
int main(){
    int n;
    scanf("%d",&n);
    if(isPrime(n)){
        printf("1");
    }
    else{
        printf("0");
    }
}
