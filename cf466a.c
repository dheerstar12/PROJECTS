// Ann has recently started commuting by subway. We know that a one ride subway ticket costs a rubles. 
// Besides, Ann found out that she can buy a special ticket for m rides (she can buy it several times). 
// It costs b rubles. Ann did the math; she will need to use subway n times. Help Ann, tell her what is the minimum
// sum of money she will have to spend to make n rides?


#include<stdio.h>
int main() {
int a,b,n,m,pass,ride;
scanf("%d %d %d %d", &n,&m,&a,&b);
if(n%m==0){
    pass=(n/m)*b;
    ride=n*a;
    if(pass>ride){
        printf("%d", ride);
    }
else{printf("%d", pass);}}
else{
    pass= (n/m)*b;
    ride=(n/m)*a*m;
    if(b>=(n%m)*a && pass>=ride){
        printf("%d", ride+(n%m)*a );
    }
    if(b>=(n%m)*a && pass<ride){
        printf("%d", pass+(n%m)*a );
    }
    if(b<(n%m)*a && pass<=ride){
        printf("%d", pass+b);
    }
}
return 0;
}