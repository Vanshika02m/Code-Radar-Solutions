// Your code here...

void selectionSort(int arr[],int n){
    for(int i=0;i<n-i-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[minIndex]){
                 minIndex=j;
            }
        }
        int temp=arr[minIndex];
        arr[minIndex]=arr[i];
        arr[i]=temp;
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int n;
    printf("Enter the size:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Original array:");
    printArray(arr,n);
    
    selectionSort(arr,n);
    printf("Sorted array:");
    printArray(arr,n);
}
