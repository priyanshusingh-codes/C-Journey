/*
#include <stdio.h>

int main() {
    printf("Warning! System Alert!\a\n");
    return 0;
}
    */


    #include <windows.h>

int main() {
    int i;

    for(i = 0; i < 3; i++) {
        Beep(1000, 300);
        Sleep(300);
    }

    return 0;
}