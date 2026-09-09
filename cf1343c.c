#include <stdio.h>
#define ll long long
int main() {
    long long int t;
    scanf("%lld", &t);
    
    for (long long int i = 0; i < t; i++) {
        ll n;
        scanf("%lld", &n);
        ll a[n];
    scanf("%lld", &a[0]);
    ll sum=a[0];
    ll king=a[0];
    for(int p=1;p<n;p++)
    {
        scanf("%lld", &a[p]);
        if(a[p]*a[p-1]>0 && a[p]>king){
            sum=sum-king+a[p];
            king=a[p];
        }
        if(a[p]*a[p-1]<0){
            sum=sum+a[p];
            king=a[p];
        }
    }
    printf("%lld\n", sum);
    }
    
    return 0;
}