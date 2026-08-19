// 3. We saw in class the range of the values that various data types can take. Write a simple program
// that causes an overflow of a variable of type int . Can you write a program that takes two int
// values as input and outputs Overflow if their addition causes an overflow, and outputs Okay
// otherwise

#include<stdio.h>
#include<limits.h>
int main(){
int a,b;
scanf("%d %d", &a,&b);
if(a+b>INT_MAX){
    printf("OVERFLOW");}
    else{printf("OKAY");}
}
