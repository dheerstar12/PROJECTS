//1. Write a program that converts a positive integer into (a) binary, (b) octal (representation using 0 - 7)

#include<stdio.h>
int main(){

// int oct, fact,num;
// scanf("%d",&num);
// oct=0, fact =1;
// while(num>0){
//     int rem= (num%8);
//     oct = oct + rem *fact;
//     fact= fact*10;
//     num=num/8 ;
// }
// printf("%d", oct);


int i,x1,k;
int oct[100];
scanf("%d",&k);
for(i=0; k>0; i++ ){
oct[i]=(k%8);
k=(k/8);
}

for(i=(i-1); i>=0; i--){
    printf("%d", oct[i]);
}
printf("%d", oct[4]);
}