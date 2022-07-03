#include<stdio.h>

int fatorial(long int f) {
    long int n;
    n = f;
    while(n > 1) {
        f = f * (n-1);
        n = n - 1;
    }
    return f;
}
