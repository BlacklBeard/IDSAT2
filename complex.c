#include"complex.h"

int main(){

	complex a;
	complex b;
	complex sum;
	complex diff;
	complex product;
	complex power;

	a = cinput(a);
	b = cinput(b);
	sum = cadd(a, b);
	printf("The sum is");
	cdis(sum);
	diff = csub(a, b);
	printf("The difference is");
	cdis(diff);
	product = cmultiply(a, b);
	printf("The product is");
	cdis(product);

//	power = cpower(a, 2);
//	printf("The square of the first complex number is");
//	cdis(power);
//
//	power = cpower(a, 3);
//	printf("The cube of the first complex number is");
//	cdis(power);
//
//	power = cpower(a, 5);
//	printf("The first complex number to the power of 5 is");
//	cdis(power);

	getchar();

}
