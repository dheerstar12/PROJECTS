//2. Write a program that takes two positive integers n and m as input and outputs the LCM of the two
//integers.
#include<stdio.h>
int main(){
    int n,m,i;
    scanf("%d %d", &n,&m);

    if(n>m){i=m;}
    else{i=n;}
while(1){

    if(n%i==0 && m%i==0){printf("%d", (n*m)/i);
    break;}
else{i--;}
}}
