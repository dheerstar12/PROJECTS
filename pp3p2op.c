#include<stdio.h>
int main() {
int n,p, sum;
sum=0;
scanf("%d %d", &n,&p);

while(n/p >0){
    sum= sum+ n/p;
    n=n/p;
}
printf("%d", sum);


return 0;
}