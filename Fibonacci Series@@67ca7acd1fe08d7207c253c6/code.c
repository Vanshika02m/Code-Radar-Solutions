// Your code here...
int fib(int n){
    if(n==0){
        return n;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d ",fib(n));
}