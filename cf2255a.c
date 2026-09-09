#include <stdio.h>
#define ll long long
int main() {
    long long int t;
    scanf("%lld", &t);
    
    for (long long int i = 0; i < t; i++) {
    ll n,k;
        scanf("%lld %lld", &n,&k);
ll ac=0; ll bc=0;
char s[200005];
        scanf("%s", s);
        for(int y=0;y<2*n;y++)
    {
        ll p=s[y]-'0';

        if(y!=0 && p==1 && s[y-1]=='1' && y%2!=0)
        {
            bc++;
        }
        if(y!=0 && p==1 && s[y-1]=='1' && y%2==0)
        {
            ac++;
        }

        if(y!=0 && p==0 && s[y-1]=='1' && y%2!=0)
        {
            ac++;
        }
        if(y!=0 && p==0 && s[y-1]=='1' && y%2==0)
        {
            bc++;
        }
        if(y==0 && p==0 && s[n*2-1]=='1')
        {
            bc++;
        }
        if(y==0 && p==1 && s[n*2-1]=='1')
        {
            ac++;
        }

    }
    printf("%lld %lld\n", ac,bc);
    
    
    }

    return 0;
}