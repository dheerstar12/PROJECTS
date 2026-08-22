#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
 srand((unsigned int)time(NULL));
 unsigned int num = rand(); 

int t;


 scanf("%d", &t);
while(t!=num){
    if(t<num){
        printf("Num is less than the req number");
    }
    else{
        printf("Num is more than the req number");
    }
     scanf("%d", &t);
}
if(t==num){
    printf("BINGO");
}
}