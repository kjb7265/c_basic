#include <stdio.h>

/**
 * unsigned 정수 자료형
 *      정수형은 양수~음슈까지 모두 표현
 *      예) int -2147483647~2147483647
 *      양수만 저장하면 2배 넓은 범위 사용 가능
 *      나이와 같이 음수가 없는 데이터는 unsigned 사용
 *      자료형 앞에 unsigned만 붙이면 됨
 *      기본값(default)은 signed 
 */

int main(void)
{   int a;  //signed: 음수~양수
    unsigned int b; // unsigned : 양수 x2
    
    return 0;
}