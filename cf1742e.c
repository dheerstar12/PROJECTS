#include <stdio.h>

int main() {
    long long int t;
    scanf("%lld", &t);
    
    for (long long int i = 0; i < t; i++) {
        long long n, q;
        scanf("%lld %lld", &n, &q);
        
        long long a[n], b[q], pa[n+2];
        for(long long p = 0; p < n; p++){
            scanf("%lld", &a[p]);
            if(p==0){
                      pa[0]=a[0];
            }
            if(p>0){
                    pa[p] = pa[p-1] + a[p];}
        }
        for(long long w = 0; w < q; w++){
            scanf("%lld", &b[w]);
        }

        for (long long int r = 0; r < q; r++) {
            for(long long v = 0; v < n; v++) {
                if(a[v] > b[r] && v>0) {
                    printf("%lld ", pa[v-1]);
                    break;
                } 
                else if(a[v] > b[r] && v==0){
                printf("0 "); break;
            }
            else {
                if(v==n-1)
                {
                    printf("%lld ", pa[n-1]);
                }
                else
                    continue;
                }
            }
        }
        printf("\n"); 
    }
    
    return 0;
}