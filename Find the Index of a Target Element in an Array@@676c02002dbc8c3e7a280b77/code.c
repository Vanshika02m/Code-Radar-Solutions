// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        arr[i]=target;
    }
    if(arr[i]!=target){
        printf("-1");
    }
    else{
        printf("%d",i);
    }
}