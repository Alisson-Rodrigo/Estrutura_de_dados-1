#include "calculator.h"

int soma (int a, int b) {
    return a + b;
}
int subtracao (int a, int b) {
    return a - b;
}

int mult (int a, int b) {
    return a * b;
}

float divisao (float a, float b) {
    return a / b;
}

int pow (int a, int b) {
    if (b == 1) {
        return a;
    }

    return a * pow (a, b - 1);
}

