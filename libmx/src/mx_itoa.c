#include "libmx.h"

char *mx_itoa(int number) {
    int size = mx_nbrlen(number);
    char *s = NULL;
    int minus = 0;

    if (mx_nbrlen(number) == 0)
        size = 1;
    if (number == -2147483648)
        return "-2147483648";
    if (number < 0) {
        number *= -1;
        minus = 1;
        size++;
    }
    s = mx_strnew(size);
    for (int i = size - 1; i >= 0; i--) {
        s[i] = (number % 10) + 48;
        number /= 10;
    }
    if (minus)
        s[0] = '-';
    return s;
}
