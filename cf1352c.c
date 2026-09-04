#include<stdio.h>
int main() {
int t;

scanf("%d", &t);
int n[t],k[t], count;
count=0;
for(int i=0;i<t;i++){
    scanf("%d %d", &n[i], &k[i]);
}
for(int j=0;j<t;j++){
    for(int p=1;;p++){
        if(p%n[j]!=0){
            count=count+1;}
            if(count==k[j]){
                printf("%d\n", p);
                count=0;
                break;
            }
    }
}
return 0;
}