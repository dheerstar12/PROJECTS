// 4. Write a program that takes an integer between 0 and 999 as input, and outputs the number of digits
// in the number. Can you also write a program to find the MSB of the binary representation of the
// number?

#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    if(n>=0 && n<9){printf("1");}

    else if(n>9 && n<100){printf("2");}

else{printf("3");}


}