#include "calc.hpp"

float calc(int a, char c, int b) {

    float res;

    switch (c) {
    case '+':

        res = a + b;
        return res;

    case '-':

        res = a - b;
        return res;

    case '*':

        res = a * b;
        return res;

    case '/':

        res = a / b;
        return res;
    }
    return 0;
}
