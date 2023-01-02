#include <stdio.h>

int main(void){

    int n;
    int num[3] = {0, 1, 0};
    scanf("%d" , &n);

    if (n == 1) {
        printf("1");
        return 0;
    }
    for (int i = 0; i < n-1; i++) {
        num[2] = num[1] + num[0];
        num[0] = num[1];
        num[1] = num[2];
    }
    printf("%d", num[2]);
}