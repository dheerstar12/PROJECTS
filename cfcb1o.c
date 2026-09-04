#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int t;
    if(scanf("%d", &t) != 1) return 0;
    
    for(int i = 0; i < t; i++){
        int n, m;
        scanf("%d %d", &n, &m);
        int arr[n];
        
        for(int p = 0; p < n; p++){
            scanf("%d", &arr[p]);
        }
        
        qsort(arr, n, sizeof(int), compare);
        
        int perm = n;
        int o = 0;
        
        while(o < n) {
            int cval = arr[o];
            int temp = 0;
            
            while(o < n && arr[o] == cval) {
                temp++;
                o++;
            }
            
            if(cval % 2 == 0) {
                int target = cval / 2;
                int left = 0;
                int right = n - 1;
                int first = n; 
                
                while(left <= right) {
                    int mid = left + (right - left) / 2;
                    
                    if(arr[mid] >= target) {
                        first = mid;
                        right = mid - 1;
                    } else {
                        left = mid + 1;  
                    }
                }
                
                int w = n - first;
                
                if((w + temp) > perm) {
                    perm = w + temp;
                }
            }
        }
        printf("%d\n", perm);
    }
    return 0;
}