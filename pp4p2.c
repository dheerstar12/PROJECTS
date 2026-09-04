#include<stdio.h>
int main() {
    printf("Enter a non negative number. Computer decides who starts first. Then in each turn each player will get to subtract a number from n. The number must be from 1 to 10. The person who gets 0 before their chance loses.");
int n;
scanf("%d", &n);
if(n==0){
    printf("You start\n");
    printf("Computer wins");
    return 0;
}
if(n%11==0){
    printf("Please Start\n");
    while(n>0){
            int p;
            printf("Play, its your chance\n");
        scanf("%d", &p);
    while(p>10||p<1){
        int t;
        printf("Invalid move please repeat.\n");
        scanf("%d", &t);
        p=t;
    }
    printf("Current value= %d\n", (n-p));
    printf("Computer plays=%d\n", 11-p);
    printf("Current value=%d\n", n-11);
   n=n-11;
   if(n==0){printf("You Lose\n");
return 0;}
    }
}
else{printf("Computer Starts\n");
    while(n>0){
        printf("Computer plays=%d\n", n%11);
        n=n-(n%11);
        printf("Current value= %d\n", n);
        if(n==0){printf("You Lose\n"); return 0;}
     int p;
            printf("Play, its your chance\n");
        scanf("%d", &p);
    while(p>10||p<1){
        int t;
        printf("Invalid move please repeat.\n");
        scanf("%d", &t);
        p=t;
    }
        printf("Current value= %d\n", (n-p));
        n=n-p;
    }}
 return 0;
}