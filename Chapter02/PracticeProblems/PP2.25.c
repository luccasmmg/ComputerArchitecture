#include <stdio.h>

float sum_elements(float a[], unsigned length) {
    int i;
    float result = 0;

    for (i = 0; i <= length -1; i++)
        result += a[i];
    return result;
}

int main() {
    float balance[3] = {0.0, 0.0, 0.0};
    unsigned i;
    i = 0 - 1;
    printf("%.2d", i);
}
