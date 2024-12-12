#include <stdio.h>
int main() {
	int num,a,b,c,d;
	printf("Nhap so nguyen co 4 chu so: ");
	scanf("%d", &num);
	a = num / 1000;
	b = num / 100 % 10;
	c = num / 10 % 10;
	d = num % 10;
	printf("Tong: %d%d%d%d",d,c,b,a);
	return 0;
}
