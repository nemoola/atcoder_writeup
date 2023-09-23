#include <stdio.h>

int main(){
    int n;
    int count = 0;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    while(1) {
        int i;
        for(i = 0; i < n; i++) {
            if(a[i] % 2 != 0) {
                break;
            }
            a[i] = a[i] / 2;
        }
        if(i != n) {
            break;
        } else {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}