#include<stdio.h>
int main() {
 int a,b,c,d,count;
 count=0;
 scanf("%d %d %d %d", &a,&b,&c,&d);
 for(int x=-100;x<100;x++){
     for(int y=-100;y<100;y++){
        //  for(int z=-100;z<100;z++){
        //     if(a*x+b*y+c*z==d){
        //         count++;
        //     }
        //  }
        if((d-(a*x+b*y))%c==0){
            count++;
        }
     }
 }
 printf("%d", count);
 return 0;
}