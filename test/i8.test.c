#include <mt_core_types.h>
#include <stdio.h>

int main() {
    if(sizeof(i8) != 1) {
        return 1; 
    }
    printf("ok\n");
    return 0;
}