#include <stdio.h>

void dec(int a) {
	int c = a % 2;
	printf("%5d", c);
	if (a >= 2) {
		dec(a / 2);
	}	
}

int main() {

	int b;
	printf("Vvedite desatichnoe chislo:\n");
	scanf_s("%d", &b);
	dec(b);
	return 0;
}