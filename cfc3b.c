#include <stdio.h>

int main() {
    long long int t;
    scanf("%lld", &t);
    
    for (long long int i = 0; i < t; i++) {
        long long x,y,k;
        scanf("%lld %lld %lld", &x,&y,&k);
   long long int sum=0;
    for(long long p=0;p<k;p++){
    sum=sum+(y%x);
    x++;
    y++;
    }
    printf("%lld\n", sum);
    }
    
    return 0;
}