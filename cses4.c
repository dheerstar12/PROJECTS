#include<stdio.h>
#define ll long long
int main() {
long long n,sum;
sum=0;
scanf("%lld", &n);
long long a[n];
for(long long i=0;i<n;i++){
    scanf("%lld", &a[i]);
}
// long long b[n];
// b[0]=a[0];
for(ll i=1;i<n;i++){
    if(a[i]<a[i-1]){
                sum=sum+(a[i-1]-a[i]);
        a[i]=a[i-1];

    }
}
printf("%lld", sum);
 return 0;
}