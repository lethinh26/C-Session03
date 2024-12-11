#include <stdio.h>
int main() {
	float van,toan,anh,total,dtb;
	printf("Nhap diem mon van: ");
	scanf("%f", &van);
	printf("Nhap diem mon toan: ");
	scanf("%f", &toan);
	printf("Nhap diem mon anh: ");
	scanf("%f", &anh);
	
	total = van + toan + anh;
	dtb = total/3;
	
	printf("Tong diem 3 mon la: %.2f\n", total);
	printf("Diem trung binh: %.2f", dtb);
}
