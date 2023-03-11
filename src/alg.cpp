// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
        double result = 1;
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
        for (i = 0; i <= count; i++) {
                result += calcItem(x, i);
        }
        return result;
}

double sinn(double x, uint16_t count) {
        uint16_t i;
        double result = x;
        double m = 0;
        double l = 0;
        uint64_t t = 0;
        for (i = 2; i <= count; i++) {
                m = pown(-1, i - 1);
                l = pown(x, 2 * i - 1);
                t = fact(2 * i - 1);
                result += m * (l/t);
        }
        return result;
}

double cosn(double x, uint16_t count) {
        uint16_t i;
        double result = 1;
        double m = 0;
        double l = 0;
        uint64_t t = 0;
        for (i = 2; i <= count; i++) {
                m = pown(-1, i - 1);
                l = pown(x, 2 * i - 2);
                t = fact(2 * i - 2);
                result += m * (l / t);
        }
        return result;
}
