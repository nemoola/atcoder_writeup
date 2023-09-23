#include <stdio.h>

// not ac
int main() {
    int n, a, b;
    int sum = 0;
    scanf("%d %d %d", &n, &a, &b);
    for(int i = 1; i <= n; i++){
        int n10 = i / 10;
        int n1 =  i % 10;
        if(a <= n10 + n1 && n10 + n1 <= b){
            sum += i;
            printf("%d\n", n10 + n1);
        }
    }
    printf("%d\n", sum);
    return 0;
}