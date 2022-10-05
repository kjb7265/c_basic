#include<stdio.h>
//형변환

int main(void){
    int a =20, b =3;
    double res;
    //int -> double (작은 type -> 큰 type)
    // 6.7 =20.0/3.0
    res = (double)a/ (double)b;
    printf("a=%d, b=%d\n", a, b);
    printf("a/b의 결과 : %.1lf\n", res);

    //double -> int (큰 타입 -> 작은 타입)  : 값의 손실
    a= (int)res;        //res (6.7)
    //반올림없이 그대로 점이하가 손실됨
    printf("(int) %.1lf의 결과 : %d\n", res, a);
}