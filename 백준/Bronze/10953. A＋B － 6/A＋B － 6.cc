#include<stdio.h>
int main(void) {
    int input;
    scanf("%d", &input);
    for (int i = 0; i < input; i++) {
        int a, b;
        scanf("%d, %d", &a, &b);
        printf("%d\n", a + b);
    }
}