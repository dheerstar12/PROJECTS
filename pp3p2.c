// Given a number and a prime , write a program to find the largest power of that divides 
// (the factorial of ).
#include<stdio.h>
int main() {
    int n,p,fact,count;
    count=0;
    fact=1;
 scanf("%d %d", &n,&p);
 for(int t=1;t<=n;t++){
    fact=fact*t;
 }

while(fact%p==0){
    fact=fact/p;
    count=count+1;
}
printf("%d", count);
 return 0;
}
