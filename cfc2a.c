#include<stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    for(int p=0;p<t;p++){

        int n,k;
        scanf("%d %d", &n, &k);
        int c;
        int mc=0;
        while((c = getchar()) != '\n' && c != EOF);
        
        while(n>0){
            int cnt=1; 
            
            while(cnt<=k && (c=getchar())!=EOF){
                int i = c - '0'; 
                
                if(i==0){
                    while(cnt < k) {
                        getchar();
                        cnt++;
                    }
                    n=n-k;
                    break;
                }
                else{
                    cnt++;
                }
                if(i==1 && cnt > k){ 
                    mc++;
                    n=n-k;
                }
            }
        }
        printf("%d\n", mc); 
    }

    return 0;
}