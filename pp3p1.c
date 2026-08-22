#include<stdio.h>
int main() {
    long long max,n;
    max=0;
 scanf("%lld", &n);
while(n>0){
if(n%10>max){max=n%10;}
n=n/10;
} 
printf("%lld", max);
return 0;
}