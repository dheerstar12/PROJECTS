// Write a program that reads characters using the getchar() function until a \n is pressed, and
// prints the characters with their case changed. Assume that all the characters that are read are
// between 'a' to 'z' or 'A' to 'Z'. Rememember that you can perform ASCII arithmetic (try
// printf("%c", 'A' + 3); ). For an input prOGraMmInG , the output should be PRogRAmMiNg .

#include<stdio.h>
int main(){
    int c;
   while ((c=getchar())!='\n')
{
    if(65<=c && c<=90){c=c+32;}
    else if(97<=c && c<=122){c=c-32;}
    else{;}
    putchar(c);}
}