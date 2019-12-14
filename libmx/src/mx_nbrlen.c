#include "libmx.h"

int mx_nbrlen(long long n) {
    int size = 0;

    while (n != 0) {
        n /= 10;
        size++;
    }
    return size;
}
