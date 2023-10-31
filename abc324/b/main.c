#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
    int n;
    bool flag = false;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++){
            int resolv = (int)pow((double)2, (double)i) * (int)pow((double)3, (double)j);
            if(resolv == n) {
                flag = true;
                break;
            }
        }
        if(flag){
            break;
        }
    }
    if(flag){
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}