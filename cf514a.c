#include <stdio.h>

int main() {
    long long n, k;
    long long multiplier = 1;
    if (scanf("%lld", &n) != 1) return 0;
    
    k = n;
    while (k > 9) { 
        long long d = k % 10;
        if (d >= 5) {
            n = n - (d * 2 - 9) * multiplier;
        }
        k = k / 10;
        multiplier = multiplier * 10; 
    }
    if (k != 9 && k >= 5) {
        n = n - (k * 2 - 9) * multiplier;
    }
    
    printf("%lld\n", n);
    return 0;
}