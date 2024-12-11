#include <stdio.h>
int main () {
	float r,C,S;
	const float pi = 3.14;
	printf("Nhap vao ban kinh hinh tron: ");
	scanf("%f", &r);
	C = 2*pi*r;
	S = pi*(r*r);
	printf("Dien tich hinh tron: %.2f\n", S);
	printf("Chu vi hinh tron: %.2f\n", C);
	return 0;
}
