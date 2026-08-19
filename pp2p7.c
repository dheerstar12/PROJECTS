// 7. Write a program that reads a sequence of characters using getchar() until a \n is pressed, and
// returns the length of the longest sequence within it consisting of only uppercase letters. For
// example, if the input is a3ABcDARC89#j , then the output should be 4 since DARC is the longest
// such sequence and has length 4. Do not use arrays or strings

#include<stdio.h>
int main(){
    int c,cl,ml;
 cl=0;ml=0;
while((c=getchar())!=EOF)
{if (c>='A' && c<='Z'){cl=cl+1;}
else{ if (cl>ml){ml=cl;}else{;}
cl=0;}}
printf("%d", ml);



}