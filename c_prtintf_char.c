#include <stdio.h>

/**
 * vs code 단축키 
 * Shift + Alt + N : 실행
 * shift + alt + (아래) or (위) : Line 복사
 * Alt + (아래) or (위) : Line 복사
 * Ctrl + X : Line 삭제
 * Crrl + space : 자동완성
 */

// ' ' : 문자 (character) : 'A', ' B', '!'
// " " : 문자열 (shring) : "A", "ABC", "A!"

// * 문자 (' ' )을 사용하는 경우
// + 키보드 제어를 할 때 사용

int main(void)
{
    /* code */
    printf("%c\n", 'A');
    printf("%s\n", "A");
    printf("%c는 %s입니다.\n", '1', "first");
    

    return 0;
}
