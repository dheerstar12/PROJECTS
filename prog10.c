//Exercise 1-12. Write a program that prints its input one word per line
#include<stdio.h>
#define IN 1
#define OUT 0
int main() {
int state, c;
state=OUT;
while ((c=getchar())!=EOF)
{if ( c == '\n' ||c=='\t'||c==' '){

if (state==IN)
{putchar('\n');
state=OUT;
}
}

else {state=IN;
putchar(c);
}


   
}

 return 0;
}

//first if statement asks if there is a space or enter or tab, if yes and if we are already in state in then print the text and then go to state out. 
//if no spacee and we are in then continue printing