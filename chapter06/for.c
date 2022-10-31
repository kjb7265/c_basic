#include <stdio.h>

/**
 * for 문 : 초기식, 조건식, 증감식으로 구성
 *  -반복횟수를 세는 변수 i는 반복문 안에서 변경 금지( 개발자 규칙)
 */

int main(void){
    int a=1;
    int i;

    for(i=0; i<3; i++){
            a=a+2;
    }
   printf("a: %d\n", a); 
}
