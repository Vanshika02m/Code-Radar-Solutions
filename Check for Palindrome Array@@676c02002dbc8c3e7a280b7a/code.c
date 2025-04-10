#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int new_arr[n];
    for(int i=0;i<n;i++){
        if(arr[i]==new_arr[i]){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
}