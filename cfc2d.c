#include<stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    for(int y=0; y<t; y++) {
        int n;
        scanf("%d", &n);
        int a[n];
        int limit = n / 2; 
        
        int freq[limit + 2]; 
        for(int i = 0; i <= limit + 1; i++) {
            freq[i] = 0;
        }
        for(int p = 0; p < n; p++) {
            scanf("%d", &a[p]);
            if(a[p] <= limit) { 
                freq[a[p]]++;
            }
        }
        
        int m = 0;
        while(m <= limit && freq[m] >= 2) {
            m++;
        }
        
        if(m == 0 && freq[0] == 1) {printf("NO\n");
        }
        else {printf("YES\n");
            int c[limit + 2];
            for(int i = 0; i <= limit + 1; i++) {
                c[i] = 0;
            }
            
            for(int l = 0; l < n; l++) {
                if(a[l] < m) {
                    if(c[a[l]] == 0) {printf("A");
                        c[a[l]]++;
                    }
                    else if(c[a[l]] == 1) {
                        printf("B");
                        c[a[l]]++;
                    }
                    else {printf("A");
                    }
                }
                else if(a[l] == m) {printf("C");
                }
                else {printf("C");
                } }
            printf("\n");
        }
    }
    return 0;
}