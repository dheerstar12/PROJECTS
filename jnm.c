#include<stdio.h>
int my_len(char*s){
    char*p=s;
    while(*p!='\0'){
        p++;
    }
    return p-s;
}


int main() {
 int q= my_len("Hello world");
 printf("%d", q);
 return 0;
}