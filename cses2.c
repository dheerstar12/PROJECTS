#include<stdio.h>
int main() {
long long n,sum;
scanf("%lld", &n);
sum=(n*(n+1)/2);
for(int i=0;i<n-1;i++){
    long long q;
    scanf("%lld", &q);
    sum=sum-q;
}
printf("%lld", sum);
 return 0;
}