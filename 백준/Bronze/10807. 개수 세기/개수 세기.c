#include<stdio.h>
int main(void) {
    int n, input, count = 0;
    scanf("%d", &n);
    int li[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &li[i]);
    }
    scanf("%d", &input);
    for (int i = 0; i < n; i++) {
        if (input == li[i]) {
            count++;
        }
    }
    printf("%d", count);
}