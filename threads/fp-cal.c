#include "threads/fp-cal.h"

int int2fp(int n){
	return n*FP;
}

int fp2int(int x){
	return x / FP;
}

int fp2int_round(int x){
	if(x >= 0) {
		return (x + (FP / 2)) / FP;
	}
	return (x - (FP / 2)) / FP;
}

int fp_add(int x, int y){
	return x + y;
}

int fp_sub(int x, int y) {
	return x - y;
}

int fp_int_add(int x, int n){
	return x + (n * FP);
}

int fp_int_sub(int x, int n){
	return x - (n * FP);
}

int fp_mul(int x, int y){
	return ((int64_t) x) * y / FP;
}

int fp_int_mul(int x, int n){
	return x * n;
}

int fp_div(int x, int y){
	return (((int64_t) x) * FP) / y;
}

int fp_int_div(int x, int n){
	return x / n;
}
