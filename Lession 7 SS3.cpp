#include <stdio.h>
int main(){
	int number;
	scanf("%d", &number);
	int number1 = number % 10;
	number /= 10;
	int number2 = number % 10;
	number /= 10;
	int number3 = number % 10;
	number /= 10;
	int number4 = number % 10;
	number /= 10;
	int total = number1 + number2 + number3 + number4;
	printf("Tong %d", total);
	return 0;
     
	
}
