#include <stdio.h>

int main() {
    int n = 7;
    float temperatures[n], sum = 0.0;
    
    printf("Enter the temperatures for the week: ");
    for(int i = 0; i < n; i++) {
        scanf("%f", &temperatures[i]);
        sum += temperatures[i];
    }
    
    float average = sum / n;
    printf("Average temperature: %.1f°C\n", average);
    
    printf("Extreme temperatures on day(s): ");
    for(int i = 0; i < n; i++) {
        if(temperatures[i] > 40 || temperatures[i] < 0) {
            printf("%d ", i + 1);
        }
    }
    printf("\n");
    
    return 0;
}
