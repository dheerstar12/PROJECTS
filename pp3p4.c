#include<stdio.h>
int main() {
int n,count,max;
count=1;
max=1;
scanf("%d", &n);
while(n>0){
    while(((n%100-n%10)/10)>=(n%10)){
        count= count+1;
        if(count>max){max=count;}
       n=n/10;
    }
count=1;
    n=n/10;
}
printf("%d", max);
return 0;
}