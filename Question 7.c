#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n], count[n];
    
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        count[i] = 0;
    }
    
    for(int i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    
    printf("Duplicate elements: ");
    for(int i = 0; i < n; i++) {
        if(count[i] > 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}
