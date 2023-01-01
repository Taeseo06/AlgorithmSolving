#include <stdio.h>

int main(void) {
    int total_money, total_num;
    scanf("%d %d", &total_money, &total_num);
    int money[total_num], num[total_num];
    
    for (int i = 0; i < total_num; i++) {
        scanf("%d %d", &money[i], &num[i]);
        total_money -= money[i] * num[i];
    }
    
    if (total_money == 0) {
        printf("Yes");
    } else {
        printf("No");
    }
}