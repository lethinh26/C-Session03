#include <stdio.h>
int main () {
	float c;
	printf("Nhap do C: ");
	scanf("%f", &c);
	printf("Do F la: %.2f", c*1.8+32.0);
	return 0;
}
