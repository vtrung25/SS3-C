#include <stdio.h>
int main (){
	int r;
	printf("Nhap vao ban kinh r : ");
	scanf("%d", &r);
	float pi = 3.14;
	float chuVi = 2 * pi * r;
	float dienTich = pi * r * r;
	printf("Chu vi hinh tron la %.2f\nDien tich hinh tron la %.2f", chuVi, dienTich);
	return 0;

	
	
}
