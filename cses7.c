#include<stdio.h>
int main() {
int n;
scanf("%d", &n);
for(int k=1;k<=n;k++){
    printf("%d\n", ((k*k)*(k*k-1)/2)-(4*(k-1)*(k-2)));
}
 return 0;
}