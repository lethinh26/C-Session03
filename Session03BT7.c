#include <stdio.h>
int main() {
	int a,b,result=0;
	printf("Nhap so nguyen co 4 chu so: ");
	scanf("%d", &a);
	while(a>0) {
		b = a%10;
		result += b;
		a /= 10;
	}
	printf("Tong: %d",result);
	return 0;
}
