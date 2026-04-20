#include <stdio.h>

int main() {
    const volatile int sensor = 100;  
    // cannot modify by program, but may change externally

    printf("Sensor value = %d\n", sensor);
    return 0;
}