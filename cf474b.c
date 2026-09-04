#include<stdio.h>
int main() {
int n;
int count=0;
scanf("%d", &n);
int a[n];
for(int i = 0; i < n; i++) {
        int worms_in_pile;
        scanf("%d", &worms_in_pile);
        count = count + worms_in_pile;
a[i] = count; 
    }
int q;
scanf("%d", &q);
int b[q];
for(int i=0;i<q;i++){
    scanf("%d", &b[i]);
}
for(int i=0;i<q;i++){
        int left=0;
    int right=n-1;
    int target=b[i];
    int first=0;
    while(left<=right){
            int mid=(left+(right-left)/2);
    if(target<=a[mid]){
right=mid-1;
    first=mid;
    }
    else{left=mid+1;}
}printf("%d\n", first+1);}

return 0;
}