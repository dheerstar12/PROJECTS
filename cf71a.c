#include<stdio.h>
#include<string.h>
int main() {
    int n,i;
 scanf("%d", &n);
for(i=0;i<n;i++){
    char xi[1000];
    scanf("%s", xi);
     if(strlen(xi)>10){
    printf("%c%ld%c\n", xi[0],(strlen(xi)-2),xi[strlen(xi)-1]);
}else{printf("%s\n", xi);}
}


 return 0;
}