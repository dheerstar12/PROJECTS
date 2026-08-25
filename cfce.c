#include<stdio.h>
int main() {

int n,c[1005],m[1005];
scanf("%d", &n);
for(int i=0;i<n;i++){
scanf("%d %d", &c[i], &m[i]);
}

for(int i=0;i<n;i++){
    if(m[i]%c[i]==0){
        printf("%d\n", c[i]*(m[i]/c[i])*(m[i]/c[i]));
    }
else{
    printf("%d\n", ((c[i]-(m[i]%c[i]))*(m[i]/c[i])*(m[i]/c[i]))+(m[i]%c[i])*(m[i]/c[i]+1)*(m[i]/c[i]+1));
}}

 return 0;
}