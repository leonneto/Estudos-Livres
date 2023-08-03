#include <stdio.h>
#include <math.h>

int main() {
    int dias = 30;
    long long int total = 0; 

    for (int i = 0; i < dias; i++) {
        total += pow(2, i);  

    printf("Ao final dos %i dias, você terá: %lld centavos\n", dias, total);

    return 0;
}

