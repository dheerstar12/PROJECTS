#include<stdio.h>
int main() {
    int n, num,pow,k,p;
    num=0;pow=0;
scanf("%d", &n);
for(k=2;k<n;k++)
{if(n%k==0){num=num+1;}
else{;};}

p=n;
if(num==0){printf("%d= %d",n,n);}
else{ printf("%d=", n);
for(k=2;k<n/2;k++){
    {while(p%k==0){
        pow=pow+1;
        p=p/k;}}
       if(pow>0){ printf("%d^%d ", k, pow);}
        pow=0;
    }
}
 return 0;
}