#include<stdio.h>
#include<math.h>
int main() {
int n;
scanf("%d", &n);
float t=sqrt(n);
int p =t/1;
int ns;
if((n-pow(p,2))<(pow(p+1,2)-n)){
    ns=p*p;
}
else{
    ns=pow(p+1,2);
}
if(ns%2==0){
    if(ns<n){
        printf("%d %d", sqrt(ns)+1+1, (n-ns-1)+1);
    }
    else{printf("%d %d", sqrt(ns)+1, ns-n+1);}
}
else{
    if(n<=ns){
        printf("%d %d", ns-n+1,sqrt(ns)+1);
    }
    else{
        printf("%d %d", n-ns,sqrt(ns)+1+1);
    }
}
return 0;
}