#include<stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b) {
    long long val_a = *(const long long*)a;
    long long val_b = *(const long long*)b;
    if (val_a < val_b) return -1;
    if (val_a > val_b) return 1;
    return 0;
}
int main() {
int t;
scanf("%d", &t);
for(int i=0;i<t;i++){
    int n;
    scanf("%d", &n);
long long a[n*(n-1)/2];
for(int p=0;p<(n*(n-1)/2);p++){
    scanf("%lld", &a[p]);
}
    qsort(a, n*(n-1)/2, sizeof(long long), compare);
long long b[n];long long sum=0;
for(int u=0; u<n-1;u++){
    b[u]=a[sum];
    sum=n-(u+1)+sum;
}
b[n-1]=a[(n*(n-1)/2)-1];
for(int y=0;y<n;y++)
{printf("%lld ", b[y]);}
printf("\n");
}
 return 0;
}