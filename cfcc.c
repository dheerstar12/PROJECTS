#include<stdio.h>
int main() {
    int n;
    int a[10005], b[10005];
scanf("%d", &n);
for(int i=0;i<n;i++)
{
    scanf("%d", &a[i]);
    scanf("%d", &b[i]);
}
for(int i = 0; i < n; i++) {
    if(a[i] % b[i] == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}
 return 0;
}