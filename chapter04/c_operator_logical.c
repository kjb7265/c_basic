#include <stdio.h>

/**
논리 연산자
1. AND(&&)
    두 조건이 모두 참인 경우
    조건1   조건2   결과
False   False       False
True    False       False
True    True        True    
2. OR (||)
    조건 중에 1개라도 참이면 됨
조건1       조건2    결과
False       False   False
True        False   True
True        True    True


%%, %
||, |

1개썼을 때와 2개썼을 때의 차이?
    1개 (&,|): 2개의 조건을 모두 검사후 결과 도출
    2개(&&, ||) : 1개의 조건으로 만족하면 결과 도출
    

*/

int main(void){
    int a=30;
    int res;

    res = (a>10)&&(a<20);
    printf("(a>10)&&(a<20) : %d\n", res);
    res = (a<10)||(a>20);
    printf("(a<10)||(a>20 : %d\n", res);
    res = !(a>=30);
    printf("!(a>=30) : %d\n", res);

}