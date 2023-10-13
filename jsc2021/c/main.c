#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// not ac

int* append_int(int* array, int num, int* size){
    int* new_array = (int*)realloc(array, (*size + 1) * sizeof(int));
    new_array[*size] = num;
    (*size)++;
    return new_array;
}

int main() {
    int a, b;
    int a_size = 0;
    int b_size = 0;
    int common_size = 0;
    int* a_factor = NULL;
    int* b_factor = NULL;
    int* common_factor = NULL;
    scanf("%d %d", &a, &b);
    for(int i = 1; i <= a; i++){
        if(a % i == 0){
            a_factor = append_int(a_factor, i, &a_size);
        }
    }

    for(int i = 1; i <= b; i++){
        if(b % i == 0){
            b_factor = append_int(b_factor, i, &b_size);
        }
    }

    for(int i = 0; i < b_size; i++){
        for(int n = 0; n < a_size; n++){
            if(b_factor[i] == a_factor[n]){
                common_factor = append_int(common_factor, b_factor[i], &common_size);
            }
        }
    }

    printf("%d\n", common_factor[common_size - 1]);
    return 0;
}