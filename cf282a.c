#include<stdio.h>
#include<math.h>
#define MOD 998244353

long long fast_pow(long long base, long long exp)
{long long res=1;
base=base%MOD;
while(exp>0){
    if(exp%2==1){
        res=(res*base)%MOD;}
        base=(base*base)%MOD;
        exp /=2;}
    return res;}
    long long mod_inverse_fer(long long b)
    {return fast_pow(b, MOD-2);}

long long mod_div(long long a, long long b)
{
    a=a%MOD;
    long long inv=mod_inverse_fer(b);
    return(a*inv)%MOD;
}


int main() {
//     long long r,k,t,a[30000],m,n;
// scanf("%lld", &t);
// for(long long p=0;p<t;p++){
//     scanf("%lld", &r);

// k=mod_div(m,n);
// printf("%lld\n", k  );
// }
long long k= mod_div(23,16);
printf("%lld\n", k  );

return 0;
}