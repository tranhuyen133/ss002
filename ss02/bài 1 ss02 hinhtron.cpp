#include <stdio.h>

int main () {
	float r;
	printf("Nhap ban kinh duong tron: ");
	scanf("%f", &r);
	if(r <= 0) {
		printf("Nhap r > 0");
	} else {
		printf("circumference of circle=%f\n",r,2*3,14*r);
		printf("area of circle=%f",r,3.14*r*r);
	}
	return 0;
}
