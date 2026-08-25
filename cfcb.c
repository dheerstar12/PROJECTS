#include<stdio.h>
int main() {
    long long  n,k;
scanf("%lld %lld", &n, &k);
for(long long i=0;i<k;i++){
    if(n%10==0){
        n=n/10;
    }
    else{n=n-1;}
}
printf("%lld", n);
return 0;
}