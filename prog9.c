//word counting prog//
#include<stdio.h>
#define IN 1
#define OUT 0
int main() {
    int c, nw,state;
    nw=0;
    state=OUT;
    while((c=getchar())!=EOF){
    if (c== '\n' || c=='\t' || c==' ')
    state = OUT;
    else if(state==OUT){
    state=IN;
    ++nw;}
    }
    printf("%d", nw);

 
 return 0;
}