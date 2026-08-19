#include<stdio.h>
int main(){
int fahr;
for (fahr=0; fahr<=300; fahr =  fahr+20)
//for loop(initialisation; condition; updation {ICU})//
printf("%d\t%.2f\n", fahr, ((5.0/9.0)*(fahr-32)));

    return 0;
}
