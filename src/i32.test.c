#include "include/mt_core_types.h"
#include <stdio.h>

int main() {
    if(sizeof(i32) != 4) {
        return 1; 
    }
    printf("ok\n");
    return 0;
}