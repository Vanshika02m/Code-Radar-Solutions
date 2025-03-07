// Your code here...
int fibonacciSeries(int n){
    if(n==0){
        return n;
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