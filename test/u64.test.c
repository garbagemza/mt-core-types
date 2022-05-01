#include <mt_core_types.h>
#include <stdio.h>

int main() {
    if(sizeof(u64) != 8) {
        return 1; 
    }
    printf("ok\n");
    return 0;
}