#include<stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
int main() {
int t;
scanf("%d", &t);
for(int i=0;i<t;i++){
    int n,m;
    scanf("%d %d", &n,&m);
    int arr[n];
    int perm=n;
    int w;
    int hero;
    hero=0;
    for(int p=0;p<n;p++){
    scanf("%d", &arr[p]);
    }
        qsort(arr,n,sizeof(int),compare);
        int o;
        for(o=0;o<n;o++){
            w=0;
                int temp=0;
            if(arr[o]%2==0){
                for(int y=o;y<n;y++){
                if(arr[y]==arr[o]){
                    temp++;
                }}
                int q=n;
                while(q>0){
                    if(arr[q/2]>(arr[o]/2)){
                        q=q/2;
                    }
                    else if(arr[q/2]==(arr[o]/2)){
                        w=(n-(q/2));
                        break;
                    }
                    else{q=}
                }
            if((w+temp)>perm){
                perm=w+temp;
            }
            }
        }
        printf("%d\n", perm);
}
 return 0;
}