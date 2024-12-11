#include <stdio.h>
int main() {
	int a,b[4],i;
	printf("Nhap so nguyen co 4 chu so: ");
	scanf("%d", &a);
	for (i=3; i >= 0; i--) {
		b[i] = a%10;
		a /= 10;
	}
	for (i=3;i >= 0 ; i--) {
		printf("%d",b[i]);
	}
	return 0;
}
