// Your code here...
#include<stdio.h>
int fibonacciSeries(int n){
    if(n<=1){
        return n;
    }
    else{
        return fibonacciSeries(n-1)+fibonacciSeries(n-2);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        printf("%d ",fibonacciSeries(i));
    }
    return 0;
}