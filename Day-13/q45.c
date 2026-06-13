#include <stdio.h>

int main() {
    int n, i, a[50];

    printf("ENTER THE NO. OF ELEMENTS : ");
    scanf("%d", &n);

    if(n > 50){
        printf("Array limit exceeded!");
        return 0;
    }

    printf("ENTER THE ELEMENTS : \n");

    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    printf("ELEMENTS OF ARRAY : \n");

    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}