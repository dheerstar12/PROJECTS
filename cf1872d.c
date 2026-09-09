#include<stdio.h>
long long int gcd(long long int a, long long int b) {
    while (b != 0) {
        long long int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
long long int lcm(long long int a, long long int b) {
    return (a / gcd(a, b)) * b;
}
int main() {
long long int t;
scanf("%lld", &t);
for(long long int i=0;i<t;i++)
{
    long long int n,x,y,w;
    scanf("%lld %lld %lld", &n, &x, &y);
    w=lcm(x,y);
   long long int tx,ty,tw;
    tx=(n/x);
    ty=(n/y);
    tw=(n/w);

    long long int sum;
    sum= ((n)*(n+1)/2)-((n-(tx-tw))*(n-(tx-tw)+1)/2)-((ty-tw)*(ty-tw+1)/2);

    printf("%lld\n", sum);


}
return 0;
}