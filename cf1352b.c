#include<stdio.h>
int main() {
int t;
scanf("%d", &t);
long long n[t], k[t];
for(int y=0;y<t;y++){
        scanf("%lld %lld", &n[y],&k[y]);
}
for(int i=0;i<t;i++){
    if(n[i]%2==0){
        if(k[i]<=(n[i]/2)){
            printf("YES\n");
            for(int p=1;p<k[i];p++){printf("2 ");}
            printf("%lld\n", n[i]-((k[i]-1)*2));
        }
        else{if(k[i]<=n[i] && k[i]%2==0){
            printf("YES\n");
            for(int p=1;p<k[i];p++){
                printf("1 ");
            }
            printf("%lld\n", n[i]-k[i]+1);
        }
    else{printf("NO\n");}}
    }
    else{
        if(k[i]%2==0 || k[i]>n[i]){
            printf("NO\n");
        }
        else{printf("YES\n");
            for(int p=1;p<k[i];p++)
            {printf("1 ");}
            printf("%lld\n", n[i]-k[i]+1);
        }
    }
}
 return 0;
}