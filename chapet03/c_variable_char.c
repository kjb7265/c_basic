#include <stdio.h>  // 기본 입력, 출력 코드
#include <string.h> // 문자열을 다룰 수 있는 코드
                    // .h : heade file 의미
/**
 * char 배열명 [문자열길이+1] = 문자열;
 *      문자열 길이 +1 의 이유는 문자열의 끝에 '\0'(널 문자) 를 자동으로 추가
 *      기본자료형을 여러개 묶어서 사용하는 것을 '배열'이라고 함
 * 배열을 선언된 이후에 대입 연산자로 값 입력 불가
 *      strcopy(string copy) 함수 사용하면 가능
 *      strcpy() : 문자열 복사
 * char : ''
 * string : ""
 */

int main(void){
    char fruit[20]="strawberry";

    printf("딸기 : %s\n", fruit);
    printf("딸기쨈 : %s %s\n", fruit, "jam");

    //fruit = "banana"; // 사용 불가
    strcpy(fruit, "banana");
    printf("%s\n", fruit);
}