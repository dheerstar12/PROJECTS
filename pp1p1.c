//Write a program that takes as input two positive integers x and y and outputs the smallest integer
//greater than x that is divisible by y . If either of x or y is negative, report an error and exit.

#include<stdio.h>
int main(){
int x, y, n;
scanf("%d %d", &x, &y);
if (x<=0 || y<=0){
    printf("ERROR");
}
else if(x>=y)
{printf("%d", (x+(y-(x%y))));}

    else{printf("%d", y);}

}