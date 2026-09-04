#include<stdio.h>
#include<string.h>
int main() {
char arr[1000000];
int ct=1;
int cp=1;
scanf("%s", arr);
    size_t length = strlen(arr);
for(int i=0;i<length;i++){
    if(arr[i]==arr[i-1] && i>0){
        ct++;
    }
    else{ct=1;}
if(ct>cp){
    cp=ct;
}
}
printf("%d", cp); 
return 0;
}