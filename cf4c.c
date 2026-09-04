#include<stdio.h>
#include<string.h>
int main() {
int t, count;
count=0;
scanf("%d", &t);
char datab[t][33];
for(int j=0;j<t;j++){
    scanf("%s", datab[j]);
}

for(int q=0;q<t;q++){
    for(int p=0;p<q;p++){
        if(strcmp(datab[q], datab[p]) == 0){
       count=count+1;
        }
    } if(count>0){
printf("%s%d\n", datab[q], count);}
else{printf("OK\n");}
count=0;
}

return 0;
}