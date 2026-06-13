#include <stdio.h>

int main() {
    int n, i, a[50], ecount = 0, ocount = 0;

    printf("ENTER THE NO. OF ELEMENTS : ");
    scanf("%d", &n);

    printf("ENTER THE ELEMENTS : \n");

    // Input array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Count even and odd elements
    for(i = 0; i < n; i++) {
        if(a[i] % 2 == 0) {
            ecount++;
        }
        else {
            ocount++;
        }
    }

    printf("EVEN ELEMENT COUNT OF ARRAY : %d\n", ecount);
    printf("ODD ELEMENT COUNT OF ARRAY : %d", ocount);

    return 0;
}