#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int t;
    scanf("%d", &t); 
    
    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        
        int k[n];
        for (int p = 0; p < n; p++) {
            scanf("%d", &k[p]);
        }
        
        int ans = gcd(k[0], k[n-1]);
        printf("%d\n", ans);
    }
    
    return 0;
}