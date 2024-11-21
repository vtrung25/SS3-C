#include <stdio.h>
int main (){
	float diemToan;
	float diemVan;
	float diemAnh;
printf("Nhap diem Toan ");
scanf("%f", &diemToan);
printf("Nhap diem Van ");
scanf("%f", &diemVan);
printf("Nhap diem Anh ");
scanf("%f", &diemAnh);
float total = diemToan + diemVan + diemAnh;
float averageScore = (diemToan + diemVan + diemAnh) / 3;
printf("Diem tong %.2f\n", total);
printf("Diemm trung binh %.2f", averageScore);
return 0;




}
