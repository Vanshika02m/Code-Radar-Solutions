// Your code here...
#include<stdio.h>
int fibonacciSeries(int n){
    if(n==0){
        return 0;
    }
    else{
        return fibonacciSeries(n-1)+fibonacciSeries(n-2);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d ",fibonacciSeries(n));
}