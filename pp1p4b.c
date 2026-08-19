// 4. Write a program that takes an integer between 0 and 999 as input, and outputs the number of digits
// in the number. Can you also write a program to find the MSB of the binary representation of the
// number?

#include<stdio.h>
int main(){
int a;
    scanf("%d",&a);
if(a<0){printf("1");}
else if(a=0){printf("0 and 1");}
else{printf("0");}
}