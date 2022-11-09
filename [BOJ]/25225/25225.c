#include<stdio.h>
int main(void) {
    
    int dot, line;
    scanf("%d %d", &dot, &line);  // 점과 선의 갯수를 입력, 저장
    
    for (int i = 0; i < dot; i++) {
        int a, b;  // 점의 좌표를 입력받을 변수를 지역함수로 사용함 = 따로 저장하지 않음
        scanf("%d %d", &a, &b);  // 점의 갯수에 맞게 각 좌표를 입력받음
    }
    
    int cor[3] = {0, 0, 0};  // 0:G, 1:R, 2:B  // 각 색깔에 선을 구분하고자 크기 3의 배열을 선언
    
    for (int i = 0; i < line; i++) {
        int a, b;  // 연결된 선의 번호(정수)와 선의 색깔(문자)를 입력받고자 지역변수를 사용 = 따로 저장하지 않고 for문 내에서 처리함
        char input;
        scanf("%d %d %c", &a, &b, &input);  // 연결된는 점의 번호(2), 연결하는 선의 색깔(문자)를 입력, 저장
        
        if (input == 'G') {  // 선이 초록색일때
            cor[0] += 1;
        }
        else if (input == 'R') {  // 선이 빨간색일때
            cor[1] += 1;
        }
        else if (input == 'B') {  // 선이 파란색일때
            cor[2] += 1;
        }
    }
    
    int player = 1;  // 첫 시작은 플레이어1
    
    while (1) {
        if (player == 1) {  // 플레이어1 일때
            if (cor[0]) {  // 초록색 선이 있을때
                cor[0] -= 1;
            }
            else if (cor[1]) {  // 자신의 선이 있을때
                cor[1] -= 1;
            }
            else {
                printf("jhnan917");
                break;
            }
            player += 1;  // player1 -> player2
            
        }
        else if (player == 2) {  // 플레이어2 일때
            if (cor[0]) {  // 초록색 선이 있을때
                cor[0] -= 1;
            }
            else if (cor[2]) {  // 자신의 선이 있을때
                cor[2] -= 1;
            }
            else {
                printf("jhnah917");
                break;
            }
            player -= 1;  // player2 -> player1
        }
    }
}
