/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    // 이곳에 코드를 작성해주세요!
    int a,b;
    scanf("%d %d",&a,&b);
    switch(b){
        case 1: case 3: case 5: case 7:
        case 8: case 10: case 12:
            printf("31");
            break;
        case 4: case 6: case 9: case 11:
            printf("30");
            break;
        case 2:
            if((a%4 == 0 && b%100 != 0) || a%400 == 0) 
                printf("29");
            else 
                printf("28");
            break;
        default: break;
    }
    return 0;
}