#include<stdio.h>
#define ll long long
int main() {
ll n;
scanf("%lld", &n);
if(n==2 || n==3 || n==4){
    printf("NO SOLUTION");
}  
else{
    ll t=n;
    if(t%2==0){
        while(t>1){
        printf("%lld ", t);
        t=t-2;
    }
    n=n-1;
        while(n>=1){
            printf("%lld ", n);
            n=n-2;
        }   

    }
    else{
        ll p=n;
            while(p>=1){
            printf("%lld ", p);
            p=p-2;
        }   
        n=n-1;
                while(n>1){
        printf("%lld ", n);
        n=n-2;
    }

    }
}
return 0;
}