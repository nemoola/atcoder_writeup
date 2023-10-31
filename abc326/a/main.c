#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    if(x < y) {
        if(y - x > 2) {
            printf("No\n");
        } else {
            printf("Yes\n");
        }
    } else {
        if(x - y > 3) {
            printf("No\n");
        } else {
            printf("Yes\n");
        }
    }
    return 0;
}