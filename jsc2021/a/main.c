#include <stdio.h>

int main() {
    int x, y, z;
    int z_g;
    scanf("%d %d %d", &x, &y, &z);
    float y_g = (float)y / (float)x;
    for(float i = y_g; i > -1; i -= 0.0001){
        if(y_g > i){
            z_g = i * (float)z;
            break;
        }
    }
    
    printf("%d\n", z_g);
    return 0;
}