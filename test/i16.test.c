#include <mt_core_types.h>
#include <stdio.h>

int main() {
    if(sizeof(i16) != 2) {
        return 1; 
    }
    printf("ok\n");
    return 0;
}