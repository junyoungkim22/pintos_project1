#include<stdint.h>
//#define FP 1 << 14
//const int F_P = (1 << 14);

int int2fp(int n);

int fp2int(int x);

int fp2int_round(int x);

int fp_add(int x, int y);

int fp_sub(int x, int y);

int fp_int_add(int x, int n);

int fp_int_sub(int x, int n);

int fp_mul(int x, int y);

int fp_int_mul(int x, int n);

int fp_div(int x, int y);

int fp_int_div(int x, int n);

