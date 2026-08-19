#include<stdio.h>
int main() {
 int c,nl;
 nl=0;
 while((c = getchar())!=EOF)
 if (c=='\n')
 //in place of \n if u type\t or just ' 'space u can count number of blank spaces or tabs

 {++nl;
 }
 printf("%d", nl);

 return 0;
}


//code to count new lines//
//two equal to sign are req because if we put one it is assignment operator and we need c to be equal to new lines used. in case of one = it will get assigned ascii value of \n//
//remember !=has more precedence than == so () are req//
