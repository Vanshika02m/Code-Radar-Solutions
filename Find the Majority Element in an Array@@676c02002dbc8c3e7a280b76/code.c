#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int element;
    for(int i=0;i<n;i++){
        if(arr[i]>element/2){
            printf("%d",element);
        }
        else{
            printf("-1");
        }
    }
}