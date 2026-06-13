#include <stdio.h>

int main() {
    int n, i, a[50], max, min;

    printf("ENTER THE NO. OF ELEMENTS : ");
    scanf("%d", &n);

    printf("ENTER THE ELEMENTS : \n");

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    max = a[0];
    min = a[0];

    for(i = 1; i < n; i++) {
        if(max < a[i]) {
            max = a[i];
        }

        if(min > a[i]) {
            min = a[i];
        }
    }

    printf("MINIMUM VALUE OF ARRAY : %d \n", min);
    printf("MAXIMUM VALUE OF ARRAY : %d", max);

    return 0;
}