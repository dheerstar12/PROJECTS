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
    int n;
    scanf("%d", &n);
    long long a[n], b[n], pa[n], pb[n];
    
    scanf("%lld", &a[0]);
    pa[0] = a[0];
    b[0] = a[0]; 

    for(int i=1; i<n; i++){
        scanf("%lld", &a[i]);
        pa[i] = pa[i-1] + a[i];
        b[i] = a[i];
    }
    
    qsort(b, n, sizeof(long long), compare);
    
    pb[0] = b[0];
    for(int i=1; i<n; i++){
        pb[i] = pb[i-1] + b[i];
    }

    int m;
    scanf("%d", &m);
    for(int p=0; p<m; p++){
        int l, r, type;
        scanf("%d %d %d", &type, &l, &r);
        
        if(type==1){
            if (l == 1) {
                printf("%lld\n", pa[r-1]);
            } else {
                printf("%lld\n", pa[r-1] - pa[l-2]);
            }
        }
        else {
            if (l == 1) {
                printf("%lld\n", pb[r-1]);
            } else {
                printf("%lld\n", pb[r-1] - pb[l-2]);
            }
        }
    }
    return 0;
}