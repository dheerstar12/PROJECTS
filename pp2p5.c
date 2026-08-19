#include<stdio.h>
int main(){
    int c,i,k,m,n;
    scanf("%d", &c);
    for(i=1;i<c+1;i++)
    {for(k=0;k<c-i;k++){printf(" ");}
    for(m=0;m<2*i-1;m++){printf("*");}
    printf(" \n"); }
}