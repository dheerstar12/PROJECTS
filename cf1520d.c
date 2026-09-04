#include<stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b) {
    return (*(long long*)a - *(long long*)b);
}
int main() {
long long t,count;
count=0;
    scanf("%lld", &t);

for(long long i=0;i<t;i++){
    long long k=0;
    long long n;
    scanf("%lld", &n);
   long long a[n];
   long long b[n];
    for(long long p=0;p<n;p++)
    {
        scanf("%lld", &a[p]);
        b[p]=a[p]-(p+1);
    }
            qsort(b, n, sizeof(long long), compare);


for(long long u=0;u<n;u++){
    long long e=u+1;
    while(e<n && b[u]==b[e]){
        e++;count++;
    }
    k= k+ ((count)*(count+1)/2);
    count=0;
    u=e-1;
}
printf("%lld\n", k);

        }

return 0;
}