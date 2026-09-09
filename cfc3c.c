#include <stdio.h>

int main() {
    long long int t;
    scanf("%lld", &t);
    
    for (long long int i = 0; i < t; i++) {
        long long x,y;
        scanf("%lld %lld", &x, &y);
        if((x-y)%2!=0){
            printf("%lld 0", x+y );
        }
        else if(x==0 || y==0)
        {
            printf("%lld 0", x+y);

        }
        else{
            long long int op;
            while(x>=0){


            }
            printf("%lld %lld", x+y, )
        }
    }
    
    return 0;
}