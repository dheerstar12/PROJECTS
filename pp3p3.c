#include<stdio.h>
int main() {
int n;
char c;
scanf("%d", &n);

while(c!='\n'){
    scanf("%c", &c);
    if(c>='a' && c<='z'-n){
        c= c+n;
        printf("%c", c);}
        else{c=c-26+n;
        printf("%c", c);}
    
}
 return 0;
}