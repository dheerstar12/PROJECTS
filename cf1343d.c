#include <stdio.h>
#define ll long long
#include<stdlib.h>

int compare(const void *a, const void *b) {
    long long val_a = *(const long long*)a;
    long long val_b = *(const long long*)b;
    // Reversed this to sort descending (biggest frequency first!)
    if (val_a > val_b) return -1;
    if (val_a < val_b) return 1;
    return 0;
}
int main() {
    long long int t;
    scanf("%lld", &t);
    
    for (long long int i = 0; i < t; i++) {
        ll n,k;
        scanf("%lld %lld", &n,&k);
        ll a[n];
        ll king=n;
        
        ll sa[2*k+2];
        for(int j=0; j<=2*k; j++){
            sa[j] = j;
        }

        for(int p=0;p<n;p++){
            scanf("%lld", &a[p]);
            if(p>=(n/2)){
                sa[(a[p]+a[n-1-p])] += 10000000LL;
            }
        }
    qsort(sa, 2*k+1, sizeof(long long), compare);

    for(int y=0;y<=2*k;y++){
        ll freq = sa[y] / 10000000LL;
        ll target= sa[y] % 10000000LL;
        if((n/2)-freq >= king){
            break;
        }
        ll ops = 0;
        for(int p=0; p<n/2; p++){
            if(a[p] + a[n-1-p] == target) continue;
        ll min,max;
        if(a[p]>=a[n-1-p]){min=a[n-1-p]; max=a[p];}
        else{min=a[p]; max=a[n-p-1];}

            if(target>= min + 1 && target<= max + k){
                ops++;
            } else {
                ops += 2;
            }
        }
        if(ops<king){
            king=ops;
        }
    }
        printf("%lld\n", king);
    }
    return 0;
}