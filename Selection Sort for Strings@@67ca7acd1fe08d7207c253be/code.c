// Your code here...
// Your code here...
#include<stdio.h>
void selectionSort(char arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
            
        }
        char temp=arr[minIndex];
        arr[minIndex]=arr[i];
        arr[i]=temp;
    }
    
}
void printArray(char arr[],int n){
    for(int i=0;i<n;i++){
        printf("%s ",&arr[i]);
    }
    printf("\n");
}