#include <stdio.h>

int callme_too() {
    char callme_too_data[7 * 1024 * 1024];
    return 0;
}

int callme() {
    char callme_data[512];
    callme_too();
    return 0;
}

int main() {
    char main_data[512];
    callme();
    return 0;
}
