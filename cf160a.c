#include<stdio.h>
int main() {
int n,t;
scanf("%d", &n);
int a[105];

for(int p=0;p<n;p++)
{
    scanf("%d", &a[p]);
}


for(int i=1;i<n;i++)
{t=i-1;
    while(a[i]>a[t] && t>=0)
{int temp=a[i];
    a[i]=a[t];
    a[t]=temp;
    t--;
}}
for(int i=0;i<n;i++)
{printf("%d", a[i]);}
 return 0;
}