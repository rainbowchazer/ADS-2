// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
        uint16_t result = 1;
        uint16_t i;
        for (i = 1; i <= n; i++) {
                result *= value;
        }
        return result;
}

uint64_t fact(uint16_t n) {
        uint16_t i;
        uint64_t result = 1;
        for (i = 1; i <= n; i++) {
                result *= i;
        }
        return result;
}

double calcItem(double x, uint16_t n) {
        return (pown(x, n) / fact(n));
}

double expn(double x, uint16_t count) {
        uint16_t i;
        double result = 0;
        for (i = 0; i < count; i++) {
                result += calcItem(x, i);
        }
        return result;
}

double sinn(double x, uint16_t count) {
        uint16_t i = 0;
        uint16_t j;
        double result = 0;
        for (j = 1; j <= count; i++) {
                if (i == 3) {
                        result -= calcItem(x, i);
                        j++;
                }
                if (i % 2 == 1 && i != 3) {
                        result += calcItem(x, i);
                        j++;
                }
        }
        return result;
}

double cosn(double x, uint16_t count) {
        uint16_t i = 0;
        uint16_t j;
        double result = 0;
        for (j = 1; j <= count; i++) {
                if (i == 2) {
                        result -= calcItem(x, i);
                        j++;
                }
                if (i % 2 == 0 && i != 2) {
                        result += calcItem(x, i);
                        j++;
                }
        }
        return result;
}
