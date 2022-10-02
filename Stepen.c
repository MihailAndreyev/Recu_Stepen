#include <stdio.h>

void step(int a, int d) {
	int e = a;
	for (int i=1;i<d;i++){
		a = a * e;
	}
	printf("%5d", a);
}

int main() {

	int b,c;
	printf("Vvedite chislo:\n");
	scanf_s("%d", &b);
	printf("Vvedite stepen:\n");
	scanf_s("%d", &c);
	step(b,c);
	return 0;
}