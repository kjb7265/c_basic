#include <stdio.h>

/**
 * for �� : �ʱ��, ���ǽ�, ���������� ����
 *  -�ݺ�Ƚ���� ���� ���� i�� �ݺ��� �ȿ��� ���� ����( ������ ��Ģ)
 */

int main(void){
    int a=1;
    int i;

    for(i=0; i<3; i++){
            a=a+2;
    }
   printf("a: %d\n", a); 
}