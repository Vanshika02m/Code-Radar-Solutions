#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int visited[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0; 
    }

    int duplicate = 0;

    for(int i = 0; i < n; i++) {
        if(visited[i] == 1)
            continue;
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                duplicate++;
                visited[j] = 1;
            }
        }
    }

    printf("%d\n", duplicate);
    return 0;
}
