#include<stdio.h>
int main() {
 int i,n,p,v,t,num;
 num=0;
 scanf("%d",&n);
 for(i=0;i<n;i++){
    scanf("%d",&p);
    scanf("%d",&v);
    scanf("%d",&t);

    if(p==1){if(v==1){num=num+1;}
            else if(v==0 && t==1){num=num+1;}
        else{;}}
        else{if(v==1 && t==1){num=num+1;}
    else{;}}
 }
 printf("%d", num);
 return 0;
}