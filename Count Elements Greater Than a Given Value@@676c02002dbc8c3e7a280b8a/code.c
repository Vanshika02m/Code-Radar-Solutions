#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;  
    scanf("%d", &k);

    int max = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0 && arr[i] > max) {
            max = arr[i];
        }
    }
    if(max == INT_MIN) {
        printf("0\n");  
        return 0;
    }
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == max) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
