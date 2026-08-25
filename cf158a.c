#include<stdio.h>
int main() {
int n,k,t,count;
int a[1000000];
count=0;
scanf("%d %d", &n,&k);
for(int p=0; p<n;p++)
{scanf("%d", &t);
a[p]=t;}
for(int p=0;p<n;p++){
if(a[p]>=a[k-1] && a[p]>0){
    count=count+1;
}
}
printf("%d", count);
 return 0;
}