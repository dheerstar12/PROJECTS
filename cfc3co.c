#include <stdio.h>
#define ll long long
int main() {
    ll pow[64];
    pow[0]=1;
    for(int i=1;i<64;i++){
        pow[i]=pow[i-1]*2;
    }
    long long int t;
    scanf("%lld", &t);
    
    for (ll int p = 0; p < t; p++) {
       ll x,y;
 scanf("%lld %lld", &x,&y);
ll sum=x+y;
ll s=sum;
ll bin[64];
ll king;
for(ll a=0;s>0;a++)
{
    bin[a]=(s%2);
    s=s/2;
    if(bin[a]==1){
        king=a;
    }
}
ll prince=0;
for(ll r=king;r>=0;r--){
    if(bin[r]==1){
if(prince+pow[r]<=x){
    prince=prince+pow[r];
}
    }
}
printf("%lld %lld\n", sum,x-prince);

    }
    
    return 0;
}