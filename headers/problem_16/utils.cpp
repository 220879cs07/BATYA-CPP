#include "main.h"

int factorial(int num) {
    int value = 1;

    for (int i = 1; i <= num; i++) {
        value *= i;
    }

    return value;
}
