#include <stdio.h>
int main () {
	float r;
	const float pi = 3.14;
	printf("Nhap vao ban kinh hinh tron: ");
	scanf("%f", &r);
	printf("Dien tich hinh tron: %.2f\n", pi*(r*r));
	printf("Chu vi hinh tron: %.2f\n", 2*pi*r);
	return 0;
}
