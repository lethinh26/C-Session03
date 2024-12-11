#include <stdio.h>
int main() {
	float a,h;
	printf("Nhap do dai canh tam giac: ");
	scanf("%f", &a);
	printf("Nhap chieu cao tam giac: ");
	scanf("%f", &h);
	
	printf("Dien tich tam giac: %.2f", 1/2.0*a*h);
	return 0;
}
