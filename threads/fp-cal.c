#include "threads/fp-cal.h"
//#define F_P 1<<14
const int F_P = 1<<14;

int int2fp(int n){
	return n*F_P;
}

int fp2int(int x){
	return x / F_P;
}

int fp2int_round(int x){
	if(x >= 0) {
		return (x + (F_P / 2)) / F_P;
	}
	return (x - (F_P / 2)) / F_P;
}

int fp_add(int x, int y){
	return x + y;
}

int fp_sub(int x, int y) {
	return x - y;
}

int fp_int_add(int x, int n){
	return x + (n * F_P);
}

int fp_int_sub(int x, int n){
	return x - (n * F_P);
}

int fp_mul(int x, int y){
	return ((int64_t) x) * y / F_P;
}

int fp_int_mul(int x, int n){
	return x * n;
}

int fp_div(int x, int y){
	return (((int64_t) x) * F_P) / y;
}

int fp_int_div(int x, int n){
	return x / n;
}
