#include<stdio.h>
int main() {
int t,flag;
flag=0;
scanf("%d", &t);
long long a[105];
for(int i=0;i<t;i++){
scanf("%lld", &a[i]);}
for(int i=0;i<t;i++){
    flag=0;
    for(long long p=2;p*p<a[i] && flag!=1;p++){
        if(a[i]%p==0 && flag!=1){
        long long n = a[i]/p;
    for(long long k=p+1; k*k<n; k++){
        if(n%k==0 && k!=p && n/k!=p){
            printf("YES\n%lld %lld %lld\n", p,k,n/k ); flag=1; break;
        }
    }
}}
if (flag!=1){printf("NO\n");}}
return 0;
}