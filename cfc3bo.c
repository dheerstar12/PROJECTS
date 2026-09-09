#include <stdio.h>
int main() {
    long long int t;
    if (scanf("%lld", &t) != 1) return 0;
    for (long long int i=0;i<t;i++) {
        long long int x,y,k;
        scanf("%lld %lld %lld",&x,&y,&k);
        long long int sum=0;
        long long int d=y-x; 
        while (x<=d && k>0) {
         sum = sum+(d % x);
            x++;k--;
        }
        if(k > 0){
            sum=sum+ (k*d);
        }
        printf("%lld\n", sum);
    }
    return 0;
}