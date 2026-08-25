#include<stdio.h>
int main() {
char f[10], m[10],s[10];
{
scanf("%s", f);
scanf("%s", m);
scanf("%s", s);

if(f[0]=='s')
{if(m[0]=='p' && s[0]=='p'){printf("F");}
else if(m[0]=='r' && s[0]=='s'){printf("M");}
else if(m[0]=='s' && s[0]=='r'){printf("S");}
else{printf("?");
}}

if(f[0]=='r')
{if(m[0]=='s' && s[0]=='s'){printf("F");}
else if(m[0]=='p' && s[0]=='r'){printf("M");}
else if(m[0]=='r' && s[0]=='p'){printf("S");}
else{printf("?");}
}

if(f[0]=='p')
{if(m[0]=='r' && s[0]=='r'){printf("F");}
else if(m[0]=='s' && s[0]=='p'){printf("M");}
else if(m[0]=='p' && s[0]=='s'){printf("S");}
else{printf("?");}}
}
 return 0;
}