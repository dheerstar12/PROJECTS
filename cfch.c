#include<stdio.h>
int main() {
int t;
long long bo;
int flag;
flag=0;
bo=0;
scanf("%d", &t);
long long a[105];
for(int i=0; i<t;i++){
    scanf("%lld", &a[i]);
}
for(int i=0; i<t;i++){
    if(a[i]%2!=0 && a[i]!=1){
        printf("Ashishgup\n");
    }
    else if(a[i]==1){
        printf("FastestFinger\n");
    }
    else if(a[i]==2){
        printf("Ashishgup\n");
    }
    else{
        long long temp = a[i];
        while (temp % 2 == 0) {
            temp /= 2;
        }
        if (temp > 1) {
            bo = temp;
        }
        
        if(bo==0){
            printf("FastestFinger\n");
        }
        else if(a[i]%4==0){
            printf("Ashishgup\n");
        }
        else{
            for(long long r=2; r*r<=bo; r++){
                if(bo%r==0){
                    printf("Ashishgup\n");flag=1;break;
                }
            }
            if(flag==0){
                printf("FastestFinger\n");
            }
        }
    }
    flag=0;
    bo=0;
}
return 0;
}