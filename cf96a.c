#include<stdio.h>
int main() {
long long n,count;
    count=0;
scanf("%lld", &n);
while(n>0){
    if(n%10==1){
        count=count+1;
        n=n/10;
        while(n%10==1){
            count=count+1;
            n=n/10;
        }
        if(count>=7){printf("YES");
        return 0;}
        else{count=0;}
    }
    else{count=count+1;
        n=n/10;
        while(n%10==0){
            count=count+1;
            n=n/10;

        }
        if(count>=7){printf("YES");
        return 0;}
        else{count=0;}}
} 

printf("NO");
 return 0;
}