#include <stdio.h>

int bis(int x, int m) {
	return x | m;
}

int bic(int x, int m) {
	return x & ~m;
}

int bool_or(int x, int y) {
	int result = bis(x, y);
	return result;
}

int bool_xor(int x, int y) {
	int result = bis(bic(bis(y, x), x), bic(x, y));
	return result;
}

int bool_xor_2(int x, int y) {
	int result = bis(bic(x,y), bic(y,x));
	return result;
}

int main() {
	printf("%2d\n", bool_xor(24, 32));
	printf("%2d\n", bool_xor_2(24, 32));
}
