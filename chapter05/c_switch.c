#include <stdio.h>

/**
 * 여러개의 상수 중 조건에 해당하는 하나만 골라서 실행
 * 규칙)
 * 1) 조건식은 정수식만 사용
 * 2) 기본적으로 case 는 break문을 포함 (무조건 아님)
 * 3) break가 없는 경우 break 만나기 전까지 모든 case 실행
 * 4) default는 조건에 해당하는 case 가 없는 경우 실행
 * 5) default는 생략가능 (if 문의 else와 비슷)
 * 6) default는 어디든 위치해도 상관없으나 대부분 맨하단
 * 7) if 문보다 switch 문이 실행속도 빠름 
 */

int main(void){

    int rank =2, m=0;

    switch(rank){
        case 1:
            m=300;
        case 2:
            m=200;
        case 3:
            m=100;
            break;
        default: 
            m=10;
            break; 
    }
}