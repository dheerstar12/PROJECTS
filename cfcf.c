#include <stdio.h>

int main() {
    long long w, h, d, n;
    if (scanf("%lld %lld %lld", &w, &h, &d) != 3) return 0;
    if (scanf("%lld", &n) != 1) return 0;
    for (long long x = 1; x * x <= w; x++) {
        if (w % x == 0) {
            long long xb = w / x; 
            for (long long y = 1; y * y <= h; y++) {
                if (h % y == 0) {
                    long long yb = h / y; 

                    if (n % x == 0 && (n / x) % y == 0) {
                        long long z = (n / x) / y;
                        if (d % z == 0) {
                            printf("%lld %lld %lld\n", x-1, y-1, z-1);
                            return 0;
                        }
                    }

                    if (n % x == 0 && (n / x) % yb == 0) {
                        long long z = (n / x) / yb;
                        if (d % z == 0) {
                            printf("%lld %lld %lld\n", x-1, yb-1, z-1);
                            return 0;
                        }
                    }
                    
                    if (n % xb == 0 && (n / xb) % y == 0) {
                        long long z = (n / xb) / y;
                        if (d % z == 0) {
                            printf("%lld %lld %lld\n", xb-1, y-1, z-1);
                            return 0;
                        }
                    }
                    

                    if (n % xb == 0 && (n / xb) % yb == 0) {
                        long long z = (n / xb) / yb;
                        if (d % z == 0) {
                            printf("%lld %lld %lld\n", xb-1, yb-1, z-1);
                            return 0;
                        }
                    }
                }
            }
        }
    }
    
    printf("-1\n");
    return 0;
}