#include<stdio.h>
int main() {
int t;
scanf("%d", &t);
for(int i=0;i<t;i++)
{
    int n;
    scanf("%d", &n);
    long long a[n];
            int b=0,c=0,d=0;
    for(int p=0;p<n;p++){
        scanf("%lld", &a[p]);
        if(a[p]%2!=0){
            b++;
        }
        else{
            if(a[p]%4==0){
                c++;
            }
            else{
                d++;
            }
        }
    }
    if(b>=c && b>=d){
        printf("%d ", b);
    }
    else if(c>=b && c>=d){
        printf("%d ", c);
    }
    else{
        printf("%d ", d);
    }
    printf("\n");
}
 return 0;
}