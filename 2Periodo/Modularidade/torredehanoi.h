#include<stdio.h>

int mover(int O, int D) {
    printf("%d --> %d \n", O, D);
}


int hanoi(int n, int O, int D, int T) {

    if (n > 0) {
        hanoi(n - 1, O, T, D);
        mover(O, D);
        hanoi(n - 1, T, D, O);
    }
}
