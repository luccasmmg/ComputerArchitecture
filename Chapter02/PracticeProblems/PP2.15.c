#include <stdio.h>

int bic(int x, int m) {
    return x & ~m;
}

int check_equality(int x, int y) {
    return !bic(x, y);
}

int main() {
    printf("%x\n", check_equality(1, 1));
    printf("%x\n", check_equality(2, 2));
    printf("%x\n", check_equality(1, 2));
    printf("%x\n", check_equality(2, 1));
}