#include<stdio.h>
#include<string.h>
int main() {
    int count,p;
    count=1;
    char a[105];
scanf("%s", a);
p=strlen(a);
for(int i=1;i<p;i++)
{
    while(a[i]==a[i-1]){
        count=count+1;
        i++;
    }
    if(count>=7){printf("YES"); return 0;}
else{count=1;};
}
printf("NO");
 return 0;
}