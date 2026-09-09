#include <stdio.h>

int main() {
    long long int t;
    scanf("%lld", &t);
    
    for (long long int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        int a[n];
        int oc=0;
        for(int p=0;p<n;p++){
            scanf("%d", &a[p]);
            if(a[p]==0){
                oc++;
            }
        }
        if(oc<2){
            printf("-1\n");
        }
        else if((a[0]!=0 && a[n-1]==0) || (a[0]==0 && a[n-1]!=0)){
            printf("1\n");
        } 
        else if(a[0]==0 && a[n-1]==0){
            printf("0\n");
        }
        else{printf("2\n");}
    }
    
    return 0;
}