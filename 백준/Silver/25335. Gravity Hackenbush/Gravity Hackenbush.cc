#include<stdio.h>
int main(void) {
    
    int dot, line;
    scanf("%d %d", &dot, &line);
    
    for (int i = 0; i < dot; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
    }
    
    int cor[3] = {0, 0, 0};  // 0:G, 1:R, 2:B
    
    for (int i = 0; i < line; i++) {
        int a, b;
        char input;
        scanf("%d %d %c", &a, &b, &input);
        
        if (input == 'G') {
            cor[0] += 1;
        }
        else if (input == 'R') {
            cor[1] += 1;
        }
        else if (input == 'B') {
            cor[2] += 1;
        }
    }
    
    int player = 1;
    
    while (1) {
        if (player == 1) {
            if (cor[0]) {
                cor[0] -= 1;
            }
            else if (cor[1]) {
                cor[1] -= 1;
            }
            else {
                printf("jhnan917");
                break;
            }
            player += 1;
            
        }
        else if (player == 2) {
            if (cor[0]) {
                cor[0] -= 1;
            }
            else if (cor[2]) {
                cor[2] -= 1;
            }
            else {
                printf("jhnah917");
                break;
            }
            player -= 1;
        }
    }
}
