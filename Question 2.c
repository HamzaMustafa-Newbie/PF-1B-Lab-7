#include <stdio.h>

int main() {
    int n, search, found = 0;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    
    printf("Enter the element to search: ");
    scanf("%d", &search);
    
    for(int i = 0; i < 10; i++) {
        if(arr[i] == search) {
            printf("Element %d found at index %d\n", search, i);
            found = 1;
            break;
        }
    }
    
    if(!found) {
        printf("Element %d not found in the array\n", search);
    }
    
    return 0;
}
