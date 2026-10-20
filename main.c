#include <stdio.h>

int main(void) {
    /* 課題0303: カッコの中を埋めて、入力されたdoubleのデータを，小数点以下15桁まで表示するプログラムを書け． */
    double f;
    scanf("%lf",&f);
    printf("%.15f",f); 
    return 0;
}
