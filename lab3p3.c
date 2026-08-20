#include<stdio.h>
int main() {
 int n,count;
 count=0;
 scanf("%d", &n);
  if(n%4==0 && ((n%3==0 && n%5!=0)||(n%3!=0 && n%5==0)))
  {count=count+1;
 n=n/4;
while(n%4==0){n=n/4;}}
else if((n%4==0 && n%3==0 && n%5==0) || (n%4==0 && n%3!=0 && n%5!=0) ){
    count=count+1;
    n=n/2;
    while(n%2==0){n=n/2;}
}
 if(n%2==0 && n%4!=0){count=count+1;
n=n/2;
while(n%2==0){n=n/2;}}
 if(n%5==0){
    count=count+1;
    n=n/5;
    while(n%5==0){
        n=n/5; }
  }
  if(n%3==0){
    count=count+1;
    n=n/3;
    while(n%3==0){
        n=n/3;}
  }  
if(count%2==0){printf("Bob");}
else{printf("Alice");}
 return 0;
}