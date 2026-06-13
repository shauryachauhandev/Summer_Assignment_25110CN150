#include <stdio.h>

int main() {
    int n, i, a[50], sum = 0;
    float avg;

    printf("ENTER THE NO. OF ELEMENTS : ");
    scanf("%d", &n);

    printf("ENTER THE ELEMENTS : \n");

    // input elements
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // find sum
    for(i = 0; i < n; i++) {
        sum = sum + a[i];
    }

    // find average
    avg = (float)sum / n;

    printf("SUM OF ELEMENTS OF ARRAY : %d \n", sum);
    printf("AVERAGE OF ELEMENTS OF ARRAY : %.2f", avg);

    return 0;
}