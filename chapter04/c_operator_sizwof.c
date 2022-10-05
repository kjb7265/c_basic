#include <stdio.h>

int main(void){
    int a=10;       //4바이트
    double b= 3.4;  //8바이트

//sizeof() 함수: 괄호 안의 값의 크기를 byte 단위로 계산
    printf("int 형 변수의 크기 : %d\n", sizeof(a));
    printf("double 형 변수의 크기 : %d\n", sizeof(b));
    printf("정수형 상수의 크기 : %d\n", sizeof(10));
    printf("수식의 결과값의 크기 : %d\n", sizeof(1.5 + 3.4));
    printf("char 자료형의 크기 : %d\n", sizeof(char));
//영문자는 1글자 1바이트
//한글은 1글자 2바이트

}