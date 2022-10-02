#include<stdio.h>

int step(int a, int b) {
    if (b == 0) return 1;
    if (b < 0) return step(1 / a, -b);
    return a * step(a, b - 1);
}

int main() {
    int a;
    int b;
    while (scanf_s("%d %d", &a, &b) == 2) {
        printf("%d\n", step(a, b));
    }
}