#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool primenumber(int number) {
    for(int i = 2; i <= sqrt(number); ++i) {
        if(number % i == 0)
            return false;
    }
    return true;
}

int fillArray(int array[], const int N){
    int num = 0, j = 0;
    for(int i = 0;i < 20;i++) {
        if(scanf("%d", &num) == 1) {
            if (primenumber(num)) {
                array[j] = num;
                j++;
                if(j == N) {
                    break;
                }
            }
        }
    }
    return j;
}

int main() {

    const int size = 10;
    int array[size];
    int rez = fillArray(array, size);
    printf("%d", rez);
    return 0;
}