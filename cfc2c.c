#include<stdio.h>
int main() {
int t;
scanf("%d", &t);
for(int i=0;i<t;i++){
    int n;
    scanf("%d", &n);
    int a[n];
    int oc=0,mc=0,pri=0;
    for(int p=0;p<n;p++){
        scanf("%d", &a[p]);
    if(a[p]==1){
 oc++;
         pri=p;
    }
    if(a[p]==-1){
        mc++;
    }
    if(mc==1 && oc==0 && a[p]==-1){
        a[p]=1;
    }
    
    }
for(int y=n-1;y>pri;y--){
        if (a[y]==-1){
            a[y]=1;
            break;
        }
    }
for(int u=0;u<n;u++){
    if(a[u]==-1){
        a[u]=0;
    }
}
for(int r=0;r<n;r++){
    printf("%d ", a[r]);
}
printf("\n");
}
 return 0;
}