
#include<stdio.h>


typedef struct complex{
	float r; // r for real 
	float i;  // i for imaginary 
}complex;


complex cinput(complex in){
		
		scanf("%f %f", &in.r, &in.i);
		
		return in;
}

complex cadd(complex a, complex b){
	 complex temp_add;
	 temp_add.r = a.r + b.r;
	temp_add.i = a.i + b.i;
	
	return temp_add;
	 
}

complex csub(complex a, complex b){
	 complex temp_sub;
	 temp_sub.r = a.r - b.r;
	temp_sub.i = a.i - b.i;
	
	return temp_sub;
	 
}

complex cmultiply(complex a, complex b){
	 complex temp_mul;
	 temp_mul.r = (a.r * b.r) - (a.i * b.i);
	 temp_mul.i = (a.i * b.r) + (a.r * b.i);
	 	return temp_mul;
}

void cdis(complex a){
	printf(" %.1f + %.1fi\n", a.r, a.i);
}






