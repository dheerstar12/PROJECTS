#include<stdio.h>
int main() {
long double a[1005];
long long n,l;
long double max;
max=0;
scanf("%lld %lld", &n, &l);
for(int i=0;i<n;i++){
    scanf("%Lf", &a[i]);
}
for(int i=0;i<n;i++){
    for(long long j=0; j<n-1;j++){
        if(a[j]>=a[j+1]){
            long double temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
for(int i=0;i<n-1;i++){
    if(a[i+1]-a[i]>max*2){
max=(a[i+1]-a[i])/2;
    }
}
if(a[0]>max){
    max=a[0];
}
if(l-a[n-1]>max){
    max=l-a[n-1];
}
printf("%.10Lf", max);

return 0;
}