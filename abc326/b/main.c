#include <stdio.h>
#include <stdbool.h>

bool is326(int n) {
    int three, two, six;
    three = n / 100;
    two = n % 100 / 10;
    six = n % 100 % 10;
    if(three * two == six) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    if(is326(n)) {
        printf("%d\n", n);
    } else {
        while(!is326(++n));
        printf("%d\n", n);
    }
    return 0;
}