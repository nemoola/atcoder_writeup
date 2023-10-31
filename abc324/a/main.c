#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, a;
    int flag = true;
    scanf("%d", &n);
    int array[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a);
        array[i] = a;
    }

    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            if(array[i] != array[j]) {
                flag = false;
                break;
            }
        }
    }

    if(flag){
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}