#include<stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b) {
    long long val_a = *(long long*)a;
    long long val_b = *(long long*)b;
    if (val_a < val_b) return -1;
    if (val_a > val_b) return 1;
    return 0;
}
int main() {
long long n,k;
scanf("%lld %lld", &n,&k);
long long a[n];
for(long long i=0;i<n;i++){
    scanf("%lld", &a[i]);
}
qsort(a, n, sizeof(long long), compare);
if(k==0 && a[0]==1){
    printf("-1");
    return 0;
}
if(k==n){
    printf("%lld", a[n]);
    return 0;
}
if(k==0)
{printf("1");
return 0;}
if((a[k-1])==a[k]){
    printf("-1");
}
else{printf("%lld", a[k-1]);}
 return 0;
}