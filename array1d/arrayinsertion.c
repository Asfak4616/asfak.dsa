#include <stdio.h>

void array_ins(int n, int a[20], int pos, int item);

int main() {
    int n, a[20], i, pos, item;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("Enter the array elements\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the position and item: ");
    scanf("%d %d", &pos, &item);
    array_ins(n, a, pos, item);
    return 0;
}

void array_ins(int n, int a[20], int pos, int item){
    int i;
    for(i = n - 1; i >= pos - 1; i--) {
        a[i + 1] = a[i];
    }
    a[pos - 1] = item;
    n = n + 1;
    printf("After inserting\n");
    for(i = 0; i < n; i++) {
        printf("%d\t",a[i]);
}