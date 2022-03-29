#include <stdio.h>
int main() {
	float a, b;
	printf("Ilk degeri giriniz : \n");
	scanf_s("%f", &a);
	printf("Ikinci degeri giriniz : \n");
	scanf_s("%f", &b);

	if (a > b) {
	printf("Girdiginiz %f degeri buyuktur \n", a);
	}
	else if (b > a) {
		printf("Girdiginiz %f degeri buyuktur \n", b);
	}
	else {
		printf("Hatali islem girildi program kapanacak \n");
	}

}
